#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Testing Factorial Function") {
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(6) == 720);
}

TEST_CASE("Testing GCD Function") {
    REQUIRE(gcd(5, 15) == 5);
    REQUIRE(gcd(21, 28) == 7);
    REQUIRE(gcd(25, 100) == 25);
}
