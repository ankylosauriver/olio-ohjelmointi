#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    ~Asunto();

    int asukasMaara;
    int neliot;

    void maarita(int,int);
    double laskeKulutus(double);
private:
    
};

#endif // ASUNTO_H
