#pragma once

#include "Algorithm.h"
#include "RGBImage.h"
#include "IntensityImage.h"

class IntensityConvertor : public Algorithm<RGBImage, IntensityImage>
{
public:
	void doAlgorithm(const RGBImage &input, IntensityImage &dst) override;
};

