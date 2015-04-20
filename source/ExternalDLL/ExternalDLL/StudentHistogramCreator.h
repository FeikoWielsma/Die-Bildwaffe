#pragma once

#include "Algorithm.h"
#include "IntensityImage.h"
#include "StudentHistogram.h"

class StudentHistogramCreator : public Algorithm<IntensityImage, StudentHistogram>
{
public:
	void doAlgorithm(const IntensityImage &input, StudentHistogram &dst) override;
};

