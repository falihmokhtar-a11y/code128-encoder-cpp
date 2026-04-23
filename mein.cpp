#include <iostream>
#include <vector>
#include "Cd128Encoder.h"
#include <stdexcept>

int main() {
    try {
        std::string text;
        std::cout << "gib mir ein text ein: ";
        std::getline(std::cin, text);

        Cd128Encoder encoder;
        std::vector<int> result = encoder.encode(text);

        for (size_t i = 0; i < result.size(); ++i) {
            std::cout << result[i];
            if (i != result.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}