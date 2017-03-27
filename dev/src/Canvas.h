/*
 * Canvas.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef CANVAS_H_
#define CANVAS_H_
struct SDL_Surface;
struct SDL_Texture;
class SDL_Renderer;
namespace phys {class Vector;}
namespace cnvs {
class Image;
class Camera;
class Canvas {
public:
	Canvas();
	virtual ~Canvas();
	void draw(Image* image, phys::Vector pos);
	SDL_Texture* makeTexture(SDL_Surface*);
private:
	SDL_Renderer* renderer;
	Camera* camera;
};

} /* namespace cnvs */

#endif /* CANVAS_H_ */
