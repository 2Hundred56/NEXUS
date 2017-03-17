/*
 * Physics.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef PHYSICS_H_
#define PHYSICS_H_

#include "Component.h"
namespace phys {class Vector;}
namespace comps {

class Physics: public Component {
public:
	virtual ~Physics();
	virtual const phys::Vector& getPosition() const = 0;
	virtual void setPosition(const phys::Vector&) = 0;
};

} /* namespace comps */

#endif /* PHYSICS_H_ */
