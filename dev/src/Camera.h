/*
 * Camera.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef CAMERA_H_
#define CAMERA_H_
namespace phys{class Vector;}
namespace cnvs {

class Camera {
public:
	Camera();
	virtual ~Camera();
	virtual phys::Vector transform(phys::Vector original) = 0;
};

} /* namespace cnvs */

#endif /* CAMERA_H_ */
