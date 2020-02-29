#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Is prime function") {
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}


TEST_CASE("Verify vector of primes function")
{
	std::vector<int> expected{2, 3, 5, 7};
	REQUIRE(vector_of_primes(10) == expected);

	std::vector<int> expected2{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	REQUIRE(vector_of_primes(50) == expected2);
}

TEST_CASE("Verify get max from vector function")
{
	std::vector<int> nums{ 3, 8, 1, 99, 1000 };
	REQUIRE(get_max_from_vector(nums) == 1000);

	std::vector<int> nums2{ 15,12,11,99,88 };
	REQUIRE(get_max_from_vector(nums) == 99);

	std::vector<int> nums3{ 150,120,11,990,88888 };
	REQUIRE(get_max_from_vector(nums3) == 88888);
}