/*
 * Resources.cpp
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#include "Resources.h"
#include "SDL2/SDL.h"
#include <vector>
#include <string>
using namespace std;
namespace res {

Resources::Resources() {
	// TODO Auto-generated constructor stub
	surfs=new map<int, SDL_Surface*>();
	maxid = 0;
}
SDL_Surface* Resources::getImage(int key) {
	return (*surfs)[key];
}
int Resources::loadImage(std::string path) {
	SDL_Surface* surf = SDL_LoadBMP( path.c_str() );
	int key = maxid++;
	(*surfs)[key]=surf;
	return key;
}
Resources::~Resources() {
	for (auto const& x : *surfs)
	{
		SDL_Surface* surf = (SDL_Surface*) x.second;
		SDL_FreeSurface(surf);
	}
	delete surfs;
}

} /* namespace res */
