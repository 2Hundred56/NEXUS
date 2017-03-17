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

}

World::~World() {
	// TODO Auto-generated destructor stub
}

void World::add(objs::Object* child) {
	child->setSlot(slot++);
}

} /* namespace worlds */
