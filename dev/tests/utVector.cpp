/*
 * utVector.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */
#include "catch.hpp"
#include "Vector.h"
TEST_CASE("Vector arithmetic", "[Vector]") {
phys::Vector x = phys::Vector(2, 3, 5);
phys::Vector y = phys::Vector(1, 2, 3);
REQUIRE(x+y==phys::Vector(3, 5, 8));
REQUIRE(x-y==phys::Vector(1, 1, 2));
REQUIRE(x*5==phys::Vector(10,15,25));
REQUIRE(x/2==phys::Vector(1, 1.5, 2.5));
REQUIRE(x*y==23);
}



