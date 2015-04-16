#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	//int throwError = 0, e = 1 / throwError;
	//TODO: Create a copy from the other object
	//std::cout << "Copy constructor";
	set(other);

	for (int x = 0; x < other.getWidth(); x++)
	{
		for (int y = 0; y < other.getHeight(); y++)
		{
			setPixel(x, y, other.getPixel(x, y));
		}
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	set(width, height);
	//TODO: Initialize pixel storage
}

IntensityImageStudent::~IntensityImageStudent() {
	//int throwError = 0, e = 1 / throwError;
	//TODO: delete allocated objects
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	pixelStorage.resize(width);
	for (auto& x : pixelStorage)
	{
		x.resize(height);
	}
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	set(other.getWidth(), other.getHeight());
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	pixelStorage[x][y] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	int x = i / getWidth();
	int y = i % getWidth();

	pixelStorage[x][y] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return pixelStorage[x][y];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	int x = i / getWidth();
	int y = i % getWidth();

	return pixelStorage[x][y];
}