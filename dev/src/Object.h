/*
 * Object.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef OBJECT_H_
#define OBJECT_H_
namespace comps {class Component; class Physics;}
namespace worlds {class World;}
namespace objs {

class Object {
public:
	Object();
	virtual ~Object();

	int getSlot() const {
		return slot;
	}

	void setSlot(int slot) {
		this->slot = slot;
	}

	const comps::Physics* getPhysics() const;
	void setPhysics(comps::Physics* physics);
	const comps::Component* getRender() const;
	void setRender(comps::Component* render);

	const worlds::World* getParent() const {
		return parent;
	}

	void setParent(worlds::World* parent) {
		this->parent = parent;
	}

	const comps::Component* getDummy() const;
	void setDummy(comps::Component* dummy);

private:
	int slot;
	worlds::World* parent;
	comps::Physics* physics;
	comps::Component* render;
	comps::Component* dummy;
};

} /* namespace objs */

#endif /* OBJECT_H_ */
