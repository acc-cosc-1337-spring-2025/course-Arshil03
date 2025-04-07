#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "arrays.h"

TEST_CASE("Test get_max_from_vector") {
    REQUIRE(get_max_from_vector({1, 3, 5, 7, 9}) == 9);
    REQUIRE(get_max_from_vector({100, 200, 50, 75}) == 200);
    REQUIRE(get_max_from_vector({42}) == 42);
}

TEST_CASE("Test get_average_from_vector") {
    REQUIRE(get_average_from_vector({2, 4, 6}) == Approx(4.0));
    REQUIRE(get_average_from_vector({5, 10, 15, 20}) == Approx(12.5));
    REQUIRE(get_average_from_vector({100}) == Approx(100.0));
}
