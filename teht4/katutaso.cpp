#include "katutaso.h"

Katutaso::Katutaso() {
    cout << "katutaso luotu" << endl;
}


void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);

}

double Katutaso::laskeKulutus(double hinta)
{
    return as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta);
}
