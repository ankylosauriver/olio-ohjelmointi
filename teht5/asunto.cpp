#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;

}


void Asunto::maarita(int am, int n)
{
    asukasMaara = am;
    neliot = n;
    cout << "Asunto maaritetty asukkaita= " << am << " nelioita= " << n << endl;

}

double Asunto::laskeKulutus(double hinta)
{
    return asukasMaara*neliot*hinta;
}
