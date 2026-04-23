#include "Validator.h"
#include <stdexcept>

namespace {
    constexpr int ASCII_MIN = 32;
    constexpr int ASCII_MAX = 126;
}
void Validator::validate(const std::string& text) {

    // Prüft ob Eingabe leer ist
    if (text.empty()) {
        throw std::invalid_argument("Leere Eingabe");
    }
    
    // Prüft gültige ASCII Zeichen ist
   for (unsigned char c : text) {
    if (c < ASCII_MIN || c > ASCII_MAX) {
        throw std::invalid_argument("Ungueltige Eingabe");
    }
 }
}