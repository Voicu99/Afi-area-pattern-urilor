// Afișarea pattern-urilor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numarRanduri;

    // Citim numărul de rânduri de la utilizator
    std::cout << "Introduceti numarul de randuri pentru piramida: ";
    std::cin >> numarRanduri;

    // Afisam piramida
    for (int i = 1; i <= numarRanduri; ++i) {
        // Afisam spatii
        for (int j = 1; j <= numarRanduri - i; ++j) {
            std::cout << " ";
        }
        // Afisam stele
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}