/*
 * Sprite.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef SPRITE_H_
#define SPRITE_H_

#include "Drawable.h"
namespace cnvs {class Image;}
namespace comps {

class Sprite: public Drawable {
public:
	Sprite(cnvs::Image* img);
	virtual ~Sprite();
	virtual void draw(cnvs::Canvas);
private:
	cnvs::Image* image;
};

} /* namespace comps */

#endif /* SPRITE_H_ */
