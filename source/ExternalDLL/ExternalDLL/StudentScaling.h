#pragma once

#include "Algorithm.h"
#include "IntensityImage.h"

class StudentScaling : public Algorithm<IntensityImage, IntensityImage>
{
public:
	void doAlgorithm(const IntensityImage &input, IntensityImage &dst) override;
private:
};