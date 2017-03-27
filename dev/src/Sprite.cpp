/*
 * Sprite.cpp
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#include "Sprite.h"
#include "Image.h"
#include "Canvas.h"
using namespace cnvs;
namespace comps {

Sprite::Sprite(Image* img) {
	image=img;

}
void Sprite::draw(Canvas cnvs) {
	cnvs.draw(image);
}
Sprite::~Sprite() {
	// TODO Auto-generated destructor stub
}

} /* namespace comps */
