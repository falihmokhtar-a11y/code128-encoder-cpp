#include "catch_amalgamated.hpp"
#include "Cd128Encoder.h"

TEST_CASE("Valid input") {
    Cd128Encoder encoder;
    auto result = encoder.encode("A");

    REQUIRE(result[0] == 104); // Start
    REQUIRE(result[1] == 33);  // 'A'
    REQUIRE(result.back() == 106); // Stop
}

TEST_CASE("Empty input throws") {
    Cd128Encoder encoder;
    REQUIRE_THROWS(encoder.encode(""));
}

TEST_CASE("Invalid input throws") {
    Cd128Encoder encoder;
    REQUIRE_THROWS(encoder.encode("A\x01"));
}