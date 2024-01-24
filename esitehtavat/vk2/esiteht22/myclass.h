#ifndef MYCLASS_H
#define MYCLASS_H

class myClass
{
public:
    myClass();
    int result;

    int calculateResult();
private:
    int number1;
    int number2;

protected:
    void setNumber1(int a);
    void setNumber2(int a);
};

#endif // MYCLASS_H
