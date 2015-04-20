#pragma once

#include "Algorithm.h"
#include "RGBImage.h"
#include "IntensityImage.h"

class StudentIntensityConvertor : public Algorithm<RGBImage, IntensityImage>
{
public:
	void doAlgorithm(const RGBImage &input, IntensityImage &dst) override;
};

