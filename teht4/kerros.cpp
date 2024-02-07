#include "kerros.h"
#include "asunto.h"

Kerros::Kerros()
{
    cout << "kerros luotu" << endl;
}

Kerros::~Kerros()
{
    //cout << "kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan katutason kerrokselta perittyjä asuntoja" << endl;
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double)
{
    double yhteensa = as1.laskeKulutus(4);
    cout << "Kerroksen yhteiskulutus on " << yhteensa << endl;
    return yhteensa;
}
