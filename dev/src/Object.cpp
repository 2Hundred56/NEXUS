/*
 * Object.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#include "Object.h"
#include "Component.h"
using namespace comps;

namespace objs {

Object::Object() {
	// TODO Auto-generated constructor stub

}

Object::~Object() {
	// TODO Auto-generated destructor stub
}

const Component* Object::getPhysics() const {
	return physics;
}

void Object::setPhysics(Component* physics) {
	physics->setParent(this);
	this->physics = physics;
}

const comps::Component* Object::getRender() const {
	return render;
}

void Object::setRender(comps::Component* render) {
	render->setParent(this);
	this->render = render;
}

} /* namespace objs */
