#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
	set(0, 0);
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	//wtf moet hier?
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	set(width, height);
}

RGBImageStudent::~RGBImageStudent() {

}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	pixelStorage.clear();
	pixelStorage.resize(width * height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	//wtf moet hier?
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	setPixel(y * getWidth() + x, pixel);
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i < getWidth() * getHeight()){
		pixelStorage[i] = pixel;
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