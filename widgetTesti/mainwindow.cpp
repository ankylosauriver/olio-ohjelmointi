#include "form2.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectForm2=new Form2(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSave_clicked()
{

    fname = ui->textFname->text();
    ui->labelFname->setText("Hi, "+fname+"!");
}


void MainWindow::on_btnOpenF2_clicked()
{

    connect(objectForm2, SIGNAL(lnameIsSet()), this, SLOT(slotLnameShow()));
    objectForm2->setNameFromMainwindow(fname);
    //objectForm2->show(); // allowes to use the main window while form2 is open
    objectForm2->open(); // doesn't allow main window use until form2 closed
}

void MainWindow::slotLnameShow()
{
    QString lname=objectForm2->getLname();
    ui->labelLname->setText(lname);
}

