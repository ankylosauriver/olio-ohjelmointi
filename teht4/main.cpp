#include <iostream>
#include "asunto.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    /*
    Asunto ap;
    ap.maarita(2,100);
    cout << "asunnon kulutus, kun hinta=1 on " << ap.laskeKulutus(1) << endl;

    Katutaso kt;
    kt.maaritaAsunnot();
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta=1 on " << kt.laskeKulutus(1) << endl;
    */


    Kerrostalo talo;
    cout << "Kerrostalon kulutsu, = " << talo.laskeKulutus(1) << endl;
    return 0;
}
