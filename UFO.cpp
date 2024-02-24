#include <iostream>
#include <vector>
#include <string>
#include "ufo_functions.hpp"

int main() {
    greet();

    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    while (answer != codeword && misses < 7) {
        display_misses(misses);
        display_status(answer, codeword);

        char letter;
        std::cout << "\n\nPlease enter your guess: ";
        std::cin >> letter;

        bool guess = false;
        for (int i = 0; i < codeword.length(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess) {
            std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
        } else {
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }

        guess = false;
    }

    end_game(answer, codeword);

    return 0;
}
