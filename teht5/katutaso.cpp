#include "katutaso.h"

Katutaso::Katutaso() {
    as1 = new Asunto();
    as2 = new Asunto();
    cout << "Katutaso luotu" << endl;
}



void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    return as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta);
}
