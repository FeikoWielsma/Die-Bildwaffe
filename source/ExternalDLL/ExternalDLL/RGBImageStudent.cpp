#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
	std::cout << "Default constructor";
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	std::cout << "Copy constructor";
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	std::cout << "Widthheight constructor";
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	set(other.getWidth(), other.getHeight());
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	setPixel(y*getWidth() + x, pixel);
}

void RGBImageStudent::setPixel(int i, RGB pixel) {

	pixelStorage[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return pixelStorage[x][y];
}

RGB RGBImageStudent::getPixel(int i) const {
	int x = i / getWidth();
	int y = i % getWidth();

	return pixelStorage[x][y];	
}