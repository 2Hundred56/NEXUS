/*
 * Vector.cpp

 * Contains implementation for Vectors.
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#include "Vector.h"

using namespace phys;

Vector::Vector(float x, float y, float z) {
	// TODO Auto-generated constructor stub
	this->x=x;
	this->y=y;
	this->z=z;
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

Vector operator+(Vector lhs, Vector rhs) {
	return Vector(lhs.x+rhs.x, lhs.y+rhs.y, lhs.z+rhs.z);
}

Vector operator-(Vector lhs, Vector rhs) {
	return Vector(lhs.x-rhs.x, lhs.y-rhs.y, lhs.z-rhs.z);
}
Vector operator*(Vector lhs, float rhs) {
	return Vector(lhs.x*rhs, lhs.y*rhs, lhs.z*rhs);
}
Vector operator/(Vector lhs, float rhs) {
	return Vector(lhs.x/rhs, lhs.y/rhs, lhs.z/rhs);
}
float operator*(Vector lhs, Vector rhs) {
	return lhs.x*rhs.x+lhs.y*rhs.y+lhs.z*rhs.z;
}
