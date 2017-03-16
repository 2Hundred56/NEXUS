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

} /* namespace phys */

#endif /* VECTOR_H_ */
