#include "chef.h"

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;
}



void Chef::makeSalad()
{
    cout << "Chef " << chefName << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << chefName << " makes soup" << endl;
}
