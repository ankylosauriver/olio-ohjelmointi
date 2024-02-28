#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelGameStatus->setText("Select playtime and press start game!");
    pQTimer=new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;
}

void MainWindow::timeout()
{

}

void MainWindow::on_btnSwitch1_clicked()
{
    player1Time=gameTime;
    pQTimer->start(player1Time);
}


void MainWindow::on_btnSwitch2_clicked()
{
    player2Time=gameTime;
    pQTimer->start(player2Time);
    connect(pQTimer, SIGNAL(), this, SLOT());
}


void MainWindow::on_btnTime120s_clicked()
{
    ui->labelGameStatus->setText("Ready to play");
    connect(pQTimer, SIGNAL(on_btnStart_clicked()), this, SLOT(on_btnSwitch2_clicked()));
    gameTime=120;


}


void MainWindow::on_btnTimer5min_clicked()
{
    ui->labelGameStatus->setText("Ready to play");
    //connect(pQTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));

}


void MainWindow::on_btnStart_clicked()
{

}


void MainWindow::on_btnStop_clicked()
{

}

void MainWindow::updateProgressBar()
{

}

void MainWindow::setGameInfoText(QString, short)
{
    gameTime-=1;
    qDebug()<<"jäljellä "<<gameTime<<" sekuntia 120:stä.";
}

