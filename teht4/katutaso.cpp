#include "katutaso.h"

Katutaso::Katutaso() {
    cout << "katutaso luotu" << endl;
}
Katutaso::~Katutaso() {
    //cout << "katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);

}

double Katutaso::laskeKulutus(double)
{
    double yhteensa = as1.laskeKulutus(2);
    cout << "Kerroksen yhteiskulutus on " << yhteensa << endl;
    return yhteensa;
}
