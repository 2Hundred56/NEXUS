/*
 * utHierarchy.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */
#include "catch.hpp"
#include "World.h"
#include "Object.h"
#include "Component.h"
#include <vector>
using namespace worlds;
using namespace objs;
using namespace comps;
using namespace std;
TEST_CASE("Slot and parent assignment", "[Hierarchy]") {
	World world = World();
	vector<Object> objects = vector<Object>();
	vector<Component> components = vector<Component>();
	for (int i = 0; i<1000; i++) {
		objects.push_back(Object());
		components.push_back(Component());
	}
	for (int i = 0; i<1000; i++) {
		world.add(&objects[i]);
		objects[i].setDummy(&components[i]);
		REQUIRE(objects[i].getParent()==&world);
		REQUIRE(objects[i].getSlot()==i);
		REQUIRE(components[i].getParent()==&objects[i]);
	}
}
