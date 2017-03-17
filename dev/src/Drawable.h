/*
 * Drawable.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include "Component.h"
namespace cnvs {class Canvas;}
namespace comps {

class Drawable: public Component {
public:
	Drawable();
	virtual ~Drawable();
	virtual void draw(cnvs::Canvas) = 0;
};

} /* namespace comps */

#endif /* DRAWABLE_H_ */
