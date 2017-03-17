/*
 * BasicPhysics.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#include "BasicPhysics.h"

namespace comps {

BasicPhysics::BasicPhysics() {
	// TODO Auto-generated constructor stub

}

BasicPhysics::~BasicPhysics() {
	// TODO Auto-generated destructor stub
}

const phys::Vector& BasicPhysics::getPosition() const {
	return position;
}

void BasicPhysics::setPosition(const phys::Vector& position) {
	this->position = position;
}

} /* namespace comps */
