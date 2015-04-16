#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
	std::cout << "Default constructor";
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	std::cout << "Copy constructor";
	set(other);

	for (int x = 0 ; x < other.getWidth(); x++)
	{
		for (int y = 0; y < other.getHeight(); y++)
		{
			setPixel(x, y, other.getPixel(x, y));
		}
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	std::cout << "Widthheight constructor";
	set(width, height);
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);

	pixelStorage.resize(width);
	for (auto& x : pixelStorage)
	{
		x.resize(height);
	}
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	set(other.getWidth(), other.getHeight());
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	pixelStorage[x][y] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {

	int x = i / getWidth();
	int y = i % getWidth();

	pixelStorage[x][y] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return pixelStorage[x][y];
}

RGB RGBImageStudent::getPixel(int i) const {
	int x = i / getWidth();
	int y = i % getWidth();

	return pixelStorage[x][y];	
}