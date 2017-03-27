/*
 * utVector.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */
#include "catch.hpp"
#include "Vector.h"
using namespace phys;
TEST_CASE("Vector arithmetic", "[Vector]") {
Vector v1;
Vector v2;
Vector sum;
Vector diff;
Vector product;
Vector division;
float dot;
for (float i=0; i<5; i++) {
	for (float j=1; j<5; j++) {
		for (float k=0; k<5; k++) {
			for (float l=0; l<5; l++) {
				for (float m=0; m<5; m++) {
					for (int n=0; n<5; n++) {
						v1=Vector(i, j, k);
						v2=Vector(l, m, n);
						sum=v1+v2;
						diff=v1-v2;
						product=v1*m;
						division=v2/j;
						dot=v1*v2;
						REQUIRE(sum.getX()==i+l);
						REQUIRE(sum.getY()==j+m);
						REQUIRE(sum.getZ()==k+n);
						REQUIRE(diff.getX()==i-l);
						REQUIRE(diff.getY()==j-m);
						REQUIRE(diff.getZ()==k-n);
						REQUIRE(product.getX()==i*m);
						REQUIRE(product.getY()==j*m);
						REQUIRE(product.getZ()==k*m);
						REQUIRE(division.getX()==l/j);
						REQUIRE(division.getY()==m/j);
						REQUIRE(division.getZ()==n/j);
						REQUIRE(dot==i*l+j*m+k*n);
					}
				}
			}
		}
	}
}
}



