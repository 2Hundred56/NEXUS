/*
 * World.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef WORLD_H_
#define WORLD_H_
namespace objs {class Object;}
namespace worlds {

class World {
public:
	World();
	virtual ~World();
	void add(objs::Object*);
private:
	int slot = 0;
};

} /* namespace worlds */

#endif /* WORLD_H_ */
