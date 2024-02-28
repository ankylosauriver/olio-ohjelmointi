#ifndef FORM2_H
#define FORM2_H

#include <QDialog>

namespace Ui {
class Form2;
}

class Form2 : public QDialog
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

    void setNameFromMainwindow(const QString &newNameFromMainwindow);

    QString getLname() const;

private slots:
    void on_btnSave_clicked();


private:
    Ui::Form2 *ui;
    QString nameFromMainwindow;
    QString lname;
    void closeEvent(QCloseEvent *e);

signals:
    void lnameIsSet();
};

#endif // FORM2_H
