#pragma once

#include "Algorithm.h"
#include "IntensityImage.h"

class StudentEdgeDetection : public Algorithm<IntensityImage, IntensityImage>
{
public:
	void doAlgorithm(const IntensityImage &input, IntensityImage &dst) override;

private:
	
};