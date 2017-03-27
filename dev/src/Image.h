/*
 * Image.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef IMAGE_H_
#define IMAGE_H_

namespace cnvs {

class Image {
public:
	Image(int key, int w = 0, int h = 0);
	virtual ~Image();
};

} /* namespace cnvs */

#endif /* IMAGE_H_ */
