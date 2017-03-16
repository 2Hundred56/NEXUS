/*
 * Vector.cpp

 * Contains implementation for Vectors.
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#include "Vector.h"
namespace phys {
bool operator==(Vector lhs, Vector rhs) {
	return lhs.getX()==rhs.getX() and lhs.getY()==rhs.getY() and lhs.getZ()==rhs.getZ();
}
}
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
	return Vector(lhs.getX()+rhs.getX(), lhs.getY()+rhs.getY(), lhs.getZ()+rhs.getZ());
}

Vector operator-(Vector lhs, Vector rhs) {
	return Vector(lhs.getX()-rhs.getX(), lhs.getY()-rhs.getY(), lhs.getZ()-rhs.getZ());
}
Vector operator*(Vector lhs, float rhs) {
	return Vector(lhs.getX()*rhs, lhs.getY()*rhs, lhs.getZ()*rhs);
}
Vector operator/(Vector lhs, float rhs) {
	return Vector(lhs.getX()/rhs, lhs.getY()/rhs, lhs.getZ()/rhs);
}
float operator*(Vector lhs, Vector rhs) {
	return lhs.getX()*rhs.getX()+lhs.getY()*rhs.getY()+lhs.getZ()*rhs.getZ();
}


