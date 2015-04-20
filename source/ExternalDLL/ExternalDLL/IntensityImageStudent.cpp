#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {

}


IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	set(width, height);
}

IntensityImageStudent::~IntensityImageStudent() {

}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	pixelStorage.clear();
	pixelStorage.resize(width * height);
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {

}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	setPixel(y * getWidth() + x, pixel);
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	if (i < getWidth() * getHeight()){
		pixelStorage[i] = pixel;
	}
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return getPixel(y * getWidth() + x);
}

Intensity IntensityImageStudent::getPixel(int i) const {
	try{
		return pixelStorage.at(i);
	}
	catch (std::out_of_range){
		return Intensity();
	}
}