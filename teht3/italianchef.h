#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    //ItalianChef(string name);
    ItalianChef(string name, int water, int flour);
    ~ItalianChef();
    string getName();
    void makePasta();
private:
    int jauhot;
    int vesi;
};


#endif // ITALIANCHEF_H
