#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main()
{
    /*
    Chef gordonRamsay("Gordon Ramsay");
    gordonRamsay.makeSalad();
    gordonRamsay.makeSoup();

    Chef anthonyBourdain("Anthony Bourdain");
    anthonyBourdain.makeSalad();
    anthonyBourdain.makeSoup();


    Chef jyrki("Jyrki");
    ItalianChef mario("Mario");
    jyrki.makeSalad();
    mario.makePasta();
    jyrki.makeSoup();

    */
    ItalianChef mario("Mario",int (250),int (100));
    mario.makePasta();
    return 0;
}
