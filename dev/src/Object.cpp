/*
 * Object.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#include "Object.h"
#include "Component.h"
#include "Physics.h"
#include "Drawable.h"
using namespace comps;

namespace objs {

Object::Object() {
	// TODO Auto-generated constructor stub

}

Object::~Object() {
	// TODO Auto-generated destructor stub
}

const Physics* Object::getPhysics() const {
	return physics;
}

void Object::setPhysics(Physics* physics) {
	physics->setParent(this);
	this->physics = physics;
}

const comps::Drawable* Object::getRender() const {
	return render;
}

void Object::setRender(comps::Drawable* render) {
	render->setParent(this);
	this->render = render;
}

const comps::Component* Object::getDummy() const {
	return dummy;
}

void Object::setDummy(comps::Component* dummy) {
	dummy->setParent(this);
	this->dummy = dummy;
}

} /* namespace objs */
