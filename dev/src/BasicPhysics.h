/*
 * BasicPhysics.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef BASICPHYSICS_H_
#define BASICPHYSICS_H_

#include "Physics.h"
#include "Vector.h"
namespace comps {

class BasicPhysics: public Physics {
public:
	BasicPhysics();
	virtual ~BasicPhysics();
	const phys::Vector& getPosition() const;
	void setPosition(const phys::Vector& position);

private:
	phys::Vector position = phys::Vector(0,0,0);
};

} /* namespace comps */

#endif /* BASICPHYSICS_H_ */
