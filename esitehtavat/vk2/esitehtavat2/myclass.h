#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

using namespace std;

class myClass
{
public:
    myClass();
    ~myClass();

    string publicTextToPrint;

    void publicFunction(string publicTextToPrint);
private:
    string privateTextToPrint;

    void privateFunction();
protected:
    string protectedTextToPrint;

    void protectedFunction();

};

#endif // MYCLASS_H
