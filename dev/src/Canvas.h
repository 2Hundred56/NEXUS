/*
 * Canvas.h
 *
 *  Created on: Mar 17, 2017
 *      Author: sunlightiv
 */

#ifndef CANVAS_H_
#define CANVAS_H_

namespace cnvs {

class Canvas {
public:
	Canvas();
	virtual ~Canvas();
	void draw(Image* image);
};

} /* namespace cnvs */

#endif /* CANVAS_H_ */
