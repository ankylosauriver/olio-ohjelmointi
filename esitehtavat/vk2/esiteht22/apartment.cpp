#include "apartment.h"

Apartment::Apartment()
{

}

Apartment::Apartment(int a, int b)
{
    numOfTenants = a;
    area = b;
}

Apartment::~Apartment()
{

}

int Apartment::heatingCost()
{
    int cost = numOfTenants * area;
    return cost;
}

