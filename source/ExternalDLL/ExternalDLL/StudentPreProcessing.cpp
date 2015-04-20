#include "StudentPreProcessing.h"
#include "IntensityImageStudent.h"
#include "StudentIntensityConvertor.h"
#include "StudentHistogram.h"
#include "StudentHistogramCreator.h"
#include <iostream>


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensityImage = new IntensityImageStudent();
	StudentIntensityConvertor intensityConversion;
	intensityConversion.doAlgorithm( image, *intensityImage );

	StudentHistogram histogram;
	StudentHistogramCreator histogramCreator;
	histogramCreator.doAlgorithm(*intensityImage, histogram);
	histogram.outputFile();
	std::cout << "test\n";
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