#include "Validator.h"
#include <stdexcept>

void Validator::validate(const std::string& text) {

    // Prüft ob Eingabe leer ist
    if (text.empty()) {
        throw std::invalid_argument("Leere Eingabe");
    }
    
    // Prüft gültige ASCII Zeichen ist
    for (char c : text) {
        if (c < 32 || c > 126) {
            throw std::invalid_argument("Ungultige Eingabe");
        }
    }
}