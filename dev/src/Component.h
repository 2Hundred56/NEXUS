/*
 * Component.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_
namespace objs {class Object;}
namespace comps {

class Component {
public:
	Component();
	virtual ~Component();

	const objs::Object* getParent() const {
		return parent;
	}

	void setParent(objs::Object* parent) {
		this->parent = parent;
	}

private:
	objs::Object* parent;
};

} /* namespace comps */

#endif /* COMPONENT_H_ */
