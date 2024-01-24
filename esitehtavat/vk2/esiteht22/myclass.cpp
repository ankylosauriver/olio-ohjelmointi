#include "myclass.h"

myClass::myClass()
{
    setNumber1(2);
    setNumber2(3);
}

int myClass::calculateResult()
{
    result = number1 + number2;
    return result;
}

void myClass::setNumber1(int a)
{
    number1 = a;
}

void myClass::setNumber2(int a)
{
   number2 = a;
}
