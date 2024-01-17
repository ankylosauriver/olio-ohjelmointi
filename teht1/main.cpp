#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arvaus;

    std::srand(5);
    int vastaus = std::rand() % 20;

    //std::cout << "arvottu: " << vastaus << std::endl;   //tarkistetaan toimivuus
    std::cin >> arvaus;

    while(true) {
        if (vastaus > arvaus) {
            std::cout << "lukusi on pienempi kuin oikea vastaus" << std::endl;
            std::cin >> arvaus;
        } else if (vastaus < arvaus) {
            std::cout << "lukusi on suurempi kuin oikea vastaus" << std::endl;
            std::cin >> arvaus;
        } else {
            std::cout << "oikea vastaus" << std::endl;
            break;
        }
    }

}
