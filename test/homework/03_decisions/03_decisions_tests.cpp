#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"
#include <cassert>
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
void test_get_letter_grade_using_if() {
    assert(get_letter_grade_using_if(95) == "A");
    assert(get_letter_grade_using_if(85) == "B");
    assert(get_letter_grade_using_if(75) == "C");
    assert(get_letter_grade_using_if(65) == "D");
    assert(get_letter_grade_using_if(50) == "F");
    std::cout << "All if-else tests passed!\n";
}

void test_get_letter_grade_using_switch() {
    assert(get_letter_grade_using_switch(95) == "A");
    assert(get_letter_grade_using_switch(85) == "B");
    assert(get_letter_grade_using_switch(75) == "C");
    assert(get_letter_grade_using_switch(65) == "D");
    assert(get_letter_grade_using_switch(50) == "F");
    std::cout << "All switch tests passed!\n";
}

int main() {
    test_get_letter_grade_using_if();
    test_get_letter_grade_using_switch();
    return 0;
}
