#include "Cd128Encoder.h"
#include <stdexcept>
#include "Validator.h"

// Start Code für Code 128 
namespace {
    constexpr int START_CODE = 104;
    constexpr int STOP_CODE = 106;
    constexpr int CHECKSUM_MOD = 103;
    constexpr int ASCII_MIN = 32;
    constexpr int ASCII_MAX = 126;
}

std::vector<int> Cd128Encoder::encode(const std::string& text){
    std::vector<int> result;

    Validator::validate(text);

    int sum = START_CODE;

    // Position für Checksumme
    int position = 1;

    result.push_back(sum);

    for (char c : text) {

        // ASCII → Code128 Wert
        int numvalue = c;
        int codevalue = numvalue - ASCII_MIN;

        result.push_back(codevalue);

        // Checksumme berechnen
        sum += codevalue * position;
        position++;
    }

    int checksum = sum % CHECKSUM_MOD;
    result.push_back(checksum);

    result.push_back(STOP_CODE);

    return result;
}