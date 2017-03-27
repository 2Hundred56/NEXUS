/*
 * Resources.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef RESOURCES_H_
#define RESOURCES_H_
#include <string>
#include <vector>
#include <map>
namespace cnvs {class Image;}
struct SDL_Surface;
namespace res {

class Resources {
public:
	Resources();
	virtual ~Resources();
	SDL_Surface* getImage(int key);
	int loadImage(std::string path);
private:
	std::map<int, SDL_Surface*>* surfs;
	int maxid;
};

} /* namespace res */

#endif /* RESOURCES_H_ */
