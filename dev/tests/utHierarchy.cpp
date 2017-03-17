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
using namespace worlds;
using namespace objs;
using namespace comps;
TEST_CASE("Slot assignment", "[Hierarchy]") {
	World world = World();
	Object object0 = Object();
	Object object1 = Object();
	Component comp1 = Component();
	Component comp2 = Component();
	world.add(&object0);
	world.add(&object1);
	object0.setDummy(&comp1);
	object1.setDummy(&comp2);
	REQUIRE(object0.getSlot()==0);
	REQUIRE(object1.getSlot()==1);
}
TEST_CASE("Parent assignment", "[Hierarchy]") {
	World world = World();
	Object object0 = Object();
	Object object1 = Object();
	Component comp1 = Component();
	Component comp2 = Component();
	world.add(&object0);
	world.add(&object1);
	object0.setDummy(&comp1);
	object1.setDummy(&comp2);
	REQUIRE(object0.getParent()==&world);
	REQUIRE(object1.getParent()==&world);
	REQUIRE(comp1.getParent()==&object0);
	REQUIRE(comp2.getParent()==&object1);
}
