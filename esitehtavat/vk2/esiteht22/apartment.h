#ifndef APARTMENT_H
#define APARTMENT_H


class Apartment
{
public:
    Apartment();
    Apartment(int a,int b);

    ~Apartment();


    int heatingCost();
private:
    int numOfTenants;
    int area;

};

#endif // APARTMENT_H
