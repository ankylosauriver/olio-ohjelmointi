#include <iostream>

#include "apartment.h"
#define SEPARATOR "#<ab@17943918#@>#"
using namespace std;

int main()
{
    Apartment ap(2,60);
    int apCost = ap.heatingCost();
    cout<<"Heating cost = "<<apCost<<endl;
}
