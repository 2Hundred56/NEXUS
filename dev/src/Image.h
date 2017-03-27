/*
 * Image.h
 *
 *  Created on: Mar 27, 2017
 *      Author: sunlightiv
 */

#ifndef IMAGE_H_
#define IMAGE_H_
namespace res {
class Resources;
}
struct SDL_Texture;
namespace cnvs {
class Canvas;
class Image {
public:
	Image(Canvas* can, res::Resources* r, int key, int w = 0, int h = 0);
	virtual ~Image();

	int getHeight() const {
		return height;
	}

	int getWidth() const {
		return width;
	}

	SDL_Texture* getTexture() const {
		return tex;
	}

private:
	SDL_Texture* tex;
	int width;
	int height;
};

} /* namespace cnvs */

#endif /* IMAGE_H_ */
