#include "StudentPreProcessing.h"
#include "IntensityImageStudent.h"
#include "IntensityConvertor.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensityImage = new IntensityImageStudent();
	IntensityConvertor intensityConversion;
	intensityConversion.doAlgorithm( image, *intensityImage );
	return intensityImage;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}