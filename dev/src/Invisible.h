/*
 * Invisible.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef INVISIBLE_H_
#define INVISIBLE_H_
#include "Drawable.h"
namespace cnvs {class Canvas;}
namespace comps {

class Invisible: public Drawable {
public:
	Invisible();
	virtual ~Invisible();
	virtual void draw(cnvs::Canvas);
};

} /* namespace comps */

#endif /* INVISIBLE_H_ */
