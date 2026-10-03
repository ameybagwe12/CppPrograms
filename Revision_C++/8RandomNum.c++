#include <iostream>
#include <ctime>
int main() {
    // psudo-random number generator = NOT TRULY RANDOM
    srand(time(NULL)); // seed the random number generator with the current time
    int num = rand() % 100 + 1; // generate a random number between 1 and 100
    std::cout << "Random Number: " << num << std::endl; 

    // RANDOM EVENT GENERATOR
    srand(time(0)); // seed the random number generator with the current time
    int randomEvent = rand() % 3 + 1; // generate a random number between 1 and 3
    std::cout << "Random Event: " << randomEvent << std::endl;
    
    switch (randomEvent) {
        case 1:
            std::cout << "Event 1: You found a treasure!" << std::endl;
            break;
        case 2:
            std::cout << "Event 2: You encountered a monster!" << std::endl;
            break;
        case 3:
            std::cout << "Event 3: You discovered a secret passage!" << std::endl;
            break;
        default:
            std::cout << "No event occurred." << std::endl;
            break;
    }

    return 0;
}