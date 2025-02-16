#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get sales tax") {
	REQUIRE(get_sales_tax_amount(10) == Approx(0.675).epsilon(0.01));
	REQUIRE(get_sales_tax_amount(20) == Approx(1.35).epsilon(0.01));
}

TEST_CASE("Test Get Tip Amount") {
    REQUIRE(get_tip_amount(20, 0.15) == Approx(3.0).epsilon(0.01));
    REQUIRE(get_tip_amount(20, 0.20) == Approx(4.0).epsilon(0.01));
}