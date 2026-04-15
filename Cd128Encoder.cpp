const int START_CODE = 104;
const int STOP_CODE = 106;
const int CHECKSUM_MOD = 103;
const int ASCII_MIN = 32;
const int ASCII_MAX = 126;

#include "Cd128Encoder.h"
#include <stdexcept>
#include "Validator.h"

std::vector<int> Cd128Encoder::encode(const std::string& text){
    std::vector<int> result;

    Validator::validate(text);

    int sum = START_CODE; // Start Code B
    int position = 1;

    result.push_back(sum);

    for (char c : text) {

        int numvalue = c;
        int codevalue = numvalue - ASCII_MIN;

        result.push_back(codevalue);
        sum += codevalue * position;
        position++;
    }

    int checksum = sum % CHECKSUM_MOD;
    result.push_back(checksum);

    int stopCode = STOP_CODE;
    result.push_back(stopCode);

    return result;
}