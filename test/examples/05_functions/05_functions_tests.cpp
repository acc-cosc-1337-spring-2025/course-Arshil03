#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "func.h"

TEST_CASE("Test get_gc_content") {
    REQUIRE(get_gc_content("AGCTATAG") == Approx(37.5));
    REQUIRE(get_gc_content("CGCTATAG") == Approx(50.0));
}

TEST_CASE("Test reverse_string") {
    REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test get_dna_complement") {
    REQUIRE(get_dna_complement("AAACCCGGT") == "ACCGGGTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
