#include "StudentPreProcessing.h"
#include "IntensityImageStudent.h"
#include "StudentIntensityConvertor.h"
#include "StudentHistogram.h"
#include "StudentHistogramCreator.h"
#include "StudentEdgeDetection.h"
#include "StudentScaling.h"
#include <iostream>


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensityImage = new IntensityImageStudent();
	StudentIntensityConvertor intensityConversion;
	intensityConversion.doAlgorithm( image, *intensityImage );

	StudentHistogram histogram;
	StudentHistogramCreator histogramCreator;
	histogramCreator.doAlgorithm(*intensityImage, histogram);
	histogram.outputFile();
	return intensityImage;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	IntensityImage * intensityImage = new IntensityImageStudent();
	StudentScaling scaling;
	scaling.doAlgorithm(image, *intensityImage);
	return intensityImage;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	IntensityImage * intensityImage = new IntensityImageStudent();
	StudentEdgeDetection detection;
	detection.doAlgorithm(image, *intensityImage);
	return intensityImage;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}