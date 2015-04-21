#pragma once

#include "Algorithm.h"
#include "RGBImage.h"
#include "IntensityImage.h"

class StudentIntensityConvertor : public Algorithm<RGBImage, IntensityImage>
{
public:
	void doAlgorithm(const RGBImage &input, IntensityImage &dst) override;
private:
	const double RtoGrayScale{ 0.2989 };
	const double GtoGrayScale{ 0.5870 };
	const double BtoGrayScale{ 0.1140 };

};

