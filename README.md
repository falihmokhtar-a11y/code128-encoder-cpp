# code128-encoder-cpp
Simple Code 128 (Subset B) encoder implemented in C++ with input validation and checksum calculation.
## Designentscheidungen

Ich habe das Programm in mehrere Teile aufgeteilt.

- Die Klasse "Cd128Encoder" ist für die Kodierung zuständig.
- Die Klasse "Validator" überprüft die Eingabe (z.B. leere Eingabe oder ungültige Zeichen).
- Die "main" Funktion ist nur für Ein- und Ausgabe verantwortlich.

Diese Struktur macht den Code übersichtlich und einfacher zu verstehen.

## Build

Im Developer Command Prompt:

cl /EHsc /std:c++17 mein.cpp Cd128Encoder.cpp Validator.cpp

## Run

mein.exe

## Beispiel

Input:
HELLO123

Output:
104 40 37 44 44 47 17 18 19 0 106
