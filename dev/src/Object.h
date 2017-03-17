/*
 * Object.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef OBJECT_H_
#define OBJECT_H_
namespace comps {class Component;}
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

private:
	int slot;
	comps::Component* physics;
	comps::Component* render;
};

} /* namespace objs */

#endif /* OBJECT_H_ */
