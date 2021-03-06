/*
 * Vector.h
 * Defines the Vector class, which represents the mathematical object.
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef VECTOR_H_
#define VECTOR_H_

namespace phys {

class Vector {
public:
	Vector(float x, float y, float z=0);
	virtual ~Vector();

	float getX() const {
		return x;
	}

	void setX(float x) {
		this->x = x;
	}

	float getY() const {
		return y;
	}

	void setY(float y) {
		this->y = y;
	}

	float getZ() const {
		return z;
	}

	void setZ(float z) {
		this->z = z;
	}

private:
	float x, y, z;
};
bool operator==(phys::Vector, phys::Vector);
} /* namespace phys */
phys::Vector operator+(phys::Vector, phys::Vector);
phys::Vector operator-(phys::Vector, phys::Vector);
phys::Vector operator*(phys::Vector, float rhs);
phys::Vector operator/(phys::Vector, float);
float operator*(phys::Vector, phys::Vector);

#endif /* VECTOR_H_ */
