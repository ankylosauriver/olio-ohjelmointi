#include "italianchef.h"
#include "chef.h"
/*
ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "Chef " << chefName << " konstruktori" << endl;
}
*/

ItalianChef::ItalianChef(string name, int flour, int water) : Chef(name)
{
    cout << "Chef " << chefName << " konstruktori" << endl;
    jauhot = flour;
    vesi = water;
}

ItalianChef::~ItalianChef()
{
    //cout << "Chef " << chefName << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return chefName;
}
/*
void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta" << endl;
}
*/

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " users jauhot = " << jauhot << endl;
    cout << "Chef " << getName() << " users vesi = " << vesi << endl;
}

