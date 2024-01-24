#include "game.h"

Game::Game() {}

Game::Game(int l)
{
    std::cout << "GAME CONSTRUCTOR: object initialized with " << l << " as a maximum value" << std::endl;
    maxNumber = l;
}

Game::~Game()
{
    std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
}

void Game::play()
{
    std::srand(5);
    randomNumber = std::rand() % maxNumber;
    std::cout << "Give your guess between 1-" << maxNumber << std::endl;
    std::cin >> playerGuess;
    numOfGuesses = 1;

    while(true) {
        if (randomNumber > playerGuess) {
            std::cout << "Your guess is too small" << std::endl;
            std::cin >> playerGuess;
            numOfGuesses++;
        } else if (randomNumber < playerGuess) {
            std::cout << "Your guess is too big" << std::endl;
            std::cin >> playerGuess;
            numOfGuesses++;
        } else {
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()
{
    std::cout << "You guessed the right answer = " << randomNumber;
    std::cout << " with " << numOfGuesses << " quesses" << std::endl;
}
