#include <iostream>
#include <cstdlib>

using namespace std;
int game(int maxnum);

int main()
{
    int kierrokset;

    kierrokset = game(40);
    cout << "arvattu " << kierrokset << " kertaa." << endl;
}

int game(int maxnum){
    int arvaus;
    int veikkaukset;

    veikkaukset = 1;


    std::srand(5);
    int vastaus = std::rand() % maxnum;

    //std::cout << "arvottu: " << vastaus << std::endl;   //tarkistetaan toimivuus
    std::cin >> arvaus;
    while(true) {
        if (vastaus > arvaus) {
            std::cout << "lukusi on pienempi kuin oikea vastaus" << std::endl;
            std::cin >> arvaus;
            veikkaukset++;
        } else if (vastaus < arvaus) {
            std::cout << "lukusi on suurempi kuin oikea vastaus" << std::endl;
            std::cin >> arvaus;
            veikkaukset++;
        } else {
            std::cout << "oikea vastaus" << std::endl;
            break;
        }
    }
    return veikkaukset;
}
