# Code128 Encoder (C++)

Ein einfacher Code-128-Encoder (Subset B), implementiert in C++ mit Eingabevalidierung, Checksum-Berechnung und Unit Tests.

---

## Beschreibung

Dieses Projekt implementiert einen einfachen Code-128-Encoder für **Subset B**.  
Das Programm nimmt einen ASCII-Text als Eingabe und wandelt ihn in eine Liste von Code-128-Symbolwerten um.

Die Ausgabe enthält:
- Startcode
- Daten-Codewörter
- Checksumme
- Stopcode

Der Fokus liegt auf korrekter Kodierung, sauberer Struktur und guter Lesbarkeit des Codes.

---

## Designentscheidungen

Das Programm ist in mehrere Komponenten aufgeteilt:

- **Cd128Encoder**  
  Verantwortlich für die Kodierung und die Berechnung der Checksumme.

- **Validator**  
  Prüft die Eingabe (leerer String, ungültige ASCII-Zeichen).

- **main**  
  Zuständig für Ein- und Ausgabe (CLI).

Diese Struktur verbessert die Wartbarkeit und Lesbarkeit des Codes.

---

## Voraussetzungen

- C++17 oder neuer
- Microsoft Visual Studio / MSVC  
  oder
- CMake

---

## Build

### Mit MSVC (ohne CMake)

```bash
cl /EHsc /std:c++17 mein.cpp Cd128Encoder.cpp Validator.cpp

Mit CMake:

mkdir build
cd build
cmake ..
cmake --build .

## Ausführung
Mit MSVC:
mein.exe

### Mit CMake

```bash
.\build\Debug\code128-encoder.exe

## Eingabe und Ausgabe:
Eingabe: ASCII-Text (Zeichenbereich 32–126, Subset B)
Ausgabe: Liste von Code-128-Symbolwerten
Validierung und Fehlerbehandlung

Die Eingabe wird vor der Kodierung überprüft:

Leere Eingabe → Fehler
Ungültige Zeichen → Fehler

Fehler werden als Exception (std::invalid_argument) behandelt und ausgegeben.

# Beispiel:


Eingabe:

HELLO123

Ausgabe:

104 40 33 44 44 47 17 18 19 0 106

# Projektstruktur
Cd128Encoder.* → Implementierung der Kodierungslogik
Validator.* → Überprüfung der Eingabe
mein.cpp → Programmeinstieg (Ein- und Ausgabe)

## Tests

Für das Projekt wurden Unit Tests mit Catch2 implementiert.

Getestet wurden:
- Gültige Eingaben
- Leere Eingaben (Exception)
- Ungültige Zeichen (Exception)

### Tests ausführen

```bash
cl /EHsc /std:c++17 tests.cpp Cd128Encoder.cpp Validator.cpp catch_amalgamated.cpp
.\tests.exe
