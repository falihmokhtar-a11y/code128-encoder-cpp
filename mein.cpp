#include <iostream>
#include <vector>
#include "Cd128Encoder.h"
#include <stdexcept>
using namespace std;

int main() {
    try {
        string text;
        cout << "gib mir ein text ein: ";
        getline(cin, text);


        Cd128Encoder encoder;
        vector<int> result = encoder.encode(text);


        for (int code : result) {
        cout << code << " ";
        }

        cout << endl;

    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }
    return 0;
}