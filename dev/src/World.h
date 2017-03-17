/*
 * World.h
 *
 *  Created on: Mar 16, 2017
 *      Author: sunlightiv
 */

#ifndef WORLD_H_
#define WORLD_H_
#include <map>
namespace objs {class Object;}
namespace worlds {

class World {
public:
	World();
	virtual ~World();
	void add(objs::Object*);
	objs::Object* get(int);
private:
	int slot = 0;
	std::map<int, objs::Object*> * children;
};

} /* namespace worlds */

#endif /* WORLD_H_ */
