#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;


class Chef
{
public:
    Chef(string name);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    string chefName;
};

#endif // CHEF_H
