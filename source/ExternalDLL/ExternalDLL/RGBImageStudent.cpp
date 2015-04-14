#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	//int throwError = 0, e = 1 / throwError;

	pixelStorage = std::vector < std::vector<RGB> > {};

	for (int x = 0; x < other.getWidth(); ++x)
	{
		for (int y = 0; y < other.getHeight(); ++y)
		{
			pixelStorage[x][y] = other.getPixel(x,y);
		}
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	std::cout << "Running for loop: w: " << width << " h: " << height << std::endl;
	for (int x = 0; x < width; ++x)
	{
		pixelStorage.push_back(std::vector < RGB > {});
		std::cout << "currsize: " << pixelStorage.size() << std::endl;
		for (int y = 0; y < height; ++y)
		{
			pixelStorage[x].push_back(RGB{});
			std::cout << "currsize: " << pixelStorage[x].size() << std::endl;
		}
	}

}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	//Delete old storage
	pixelStorage = std::vector < std::vector<RGB> > {};
	//Initialize new storage
	RGBImageStudent(width, height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	pixelStorage = std::vector < std::vector<RGB> > {};
	RGBImageStudent(other.getWidth(), other.getHeight());
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	std::cout << "size: " << pixelStorage.size() <<std::endl;
	//pixelStorage[x][y] = pixel;
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

	return pixelStorage[x][y];	return 0;
}