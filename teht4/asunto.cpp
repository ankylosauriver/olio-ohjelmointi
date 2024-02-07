#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;

}

Asunto::~Asunto()
{

}

void Asunto::maarita(int am, int n)
{
    asukasMaara = am;
    neliot = n;
    cout << "asunto maaritetty asukkaita= " << am << " nelioita= " << n << endl;

}

double Asunto::laskeKulutus(double asunnot)
{
    double kulutus = asunnot * asukasMaara * neliot;
    return kulutus;
}
