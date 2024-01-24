#include "postilaatikko.h"

Postilaatikko::Postilaatikko()
{
    cout << "Luodaan Postilaatikko" << endl;
    maara = 0;

}

void Postilaatikko::lisaaPosti(int m)
{
    cout << "lisataan " << m << " postia " << endl;
    maara = m;
    cout << "postin maara on " << maara << endl;
}

void Postilaatikko::otaPosti(int m)
{
    cout << "otetaan " << m << " postia " << endl;
    maara = maara - m;
    cout << "postia jaljella " << maara << endl;

}

void Postilaatikko::asetaNimi(string n)
{
    cout << "kohdassa asetaNimi" << endl;
}
