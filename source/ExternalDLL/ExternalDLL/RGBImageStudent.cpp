#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
	std::cout << "Default constructor";
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	std::cout << "Copy constructor";
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	std::cout << "Normaal constructor";
	//set(width, height);
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	pixelStorage.clear();
	pixelStorage.resize(width * height);
	imageSize.x = width;
	imageSize.y = height;
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	//set(other.getWidth(), other.getHeight());
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	setPixel(y * getWidth() + x, pixel);
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i < imageSize.x * imageSize.y){
		pixelStorage[i] = pixel; //hier doet ie poepie over... kan [i] niet ofso...?
	}
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return getPixel(y * getWidth() + x);
}

RGB RGBImageStudent::getPixel(int i) const {
	try{
		return pixelStorage.at(i);
	}
	catch (std::out_of_range){
		return RGB();
	}
}