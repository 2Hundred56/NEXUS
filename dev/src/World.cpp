/*
 * World.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#include "World.h"
#include "Object.h"
using namespace objs;
namespace worlds {

World::World() {
	// TODO Auto-generated constructor stub
	children = new std::map<int, objs::Object*>();
}

World::~World() {
	// TODO Auto-generated destructor stub
	delete children;
}

void World::add(objs::Object* child) {
	child->setSlot(slot++);
	child->setParent(this);
	(*children)[child->getSlot()]=child;
}
objs::Object* World::get(int slot) {
	return (*children)[slot];
}

} /* namespace worlds */
