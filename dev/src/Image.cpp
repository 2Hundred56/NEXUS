/*
 * Image.cpp
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#include "Image.h"
#include "Canvas.h"
#include "SDL2/SDL.h"
#include "Resources.h"
using namespace res;
namespace cnvs {

Image::Image(Canvas* cns, res::Resources* res, int key, int w, int h) {
	// TODO Auto-generated constructor stub
	SDL_Surface* surf = res->getImage(key);
	tex = cns->makeTexture(surf);
}

Image::~Image() {
	// TODO Auto-generated destructor stub
	SDL_DestroyTexture(tex);
}

} /* namespace cnvs */
