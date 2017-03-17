/*
 * Object.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef OBJECT_H_
#define OBJECT_H_
namespace comps {class Component;}
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

	const comps::Component* getPhysics() const;
	void setPhysics(comps::Component* physics);
	const comps::Component* getRender() const;
	void setRender(comps::Component* render);

	const worlds::World* getParent() const {
		return parent;
	}

	void setParent(worlds::World* parent) {
		this->parent = parent;
	}

private:
	int slot;
	worlds::World* parent;
	comps::Component* physics;
	comps::Component* render;
};

} /* namespace objs */

#endif /* OBJECT_H_ */
