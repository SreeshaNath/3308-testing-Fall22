#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "MathOperations.h"

TEST_CASE ( "Factorials are computed", "[factorial]") {
  MathOperations m;
  REQUIRE( m.factorial(0) == 1 );
  REQUIRE( m.factorial(1) == 1 );
  REQUIRE( m.factorial(2) == 2 );
  REQUIRE( m.factorial(3) == 6 );
  REQUIRE( m.factorial(10) == 3628800 );
}


TEST_CASE ( "Addition", "[add]") {
  MathOperations m;
  REQUIRE( m.add(0,1) == 1 );
  REQUIRE( m.add(1, -1) == 0 );
  REQUIRE( m.add(2, 100) == 102 );
  REQUIRE( m.add(100000, 2000000) == 2100000 );
}


TEST_CASE ( "Check if integer is even", "[even]") {
  MathOperations m;
  REQUIRE( m.isEven(0));
  REQUIRE( !m.isEven(5));
  REQUIRE( m.isEven(1240826084));
  REQUIRE( !m.isEven(6598463));
}
