#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify rect constructor")
{
	Rect area(4, 5);
	REQUIRE(area.get_area() == 20);

	Rect area1(10, 10);
	REQUIRE(area1.get_area() == 100);

	Rect area2(100, 10);
	REQUIRE(area2.get_area() == 1000);
}
