/*
 * Canvas.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#include "Canvas.h"
#include "SDL2/SDL.h"
#include "Vector.h"
#include "Camera.h"
#include "Image.h"
using namespace phys;
namespace cnvs {

Canvas::Canvas() {
	// TODO Auto-generated constructor stub

}
void Canvas::draw(Image* image, Vector pos) {
	Vector realpos = camera->transform(pos);
	int x = realpos.getX();
	int y = realpos.getY();
	SDL_Rect rect = {x, y, image->getWidth(), image->getHeight()};
	SDL_Texture* tex = image->getTexture();
	SDL_RenderCopy(renderer, tex, 0, &rect);
}
Canvas::~Canvas() {
	// TODO Auto-generated destructor stub
	SDL_DestroyRenderer(renderer);
}
SDL_Texture* Canvas::makeTexture(SDL_Surface* surf) {
	return SDL_CreateTextureFromSurface(renderer, surf);
}
} /* namespace cnvs */
