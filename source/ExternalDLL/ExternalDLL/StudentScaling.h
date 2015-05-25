#pragma once

#include "Algorithm.h"
#include "IntensityImage.h"

class StudentScaling : public Algorithm<IntensityImage, IntensityImage>
{
public:
	void doAlgorithm(const IntensityImage &input, IntensityImage &dst) override;
private:
	const int targetSizeX = 200;
	const int targetSizeY = 200;
};