/*
 * Resources.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef RESOURCES_H_
#define RESOURCES_H_
#include <string>
namespace cnvs {class Image;}
namespace res {

class Resources {
public:
	Resources();
	virtual ~Resources();
	void* get(int key);
	int load(std::string path);
};

} /* namespace res */

#endif /* RESOURCES_H_ */
