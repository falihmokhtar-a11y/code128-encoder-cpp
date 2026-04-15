#pragma once
#include <string>
#include <vector>

class Cd128Encoder {
    public:
        std::vector<int> encode(const std::string& text);
};