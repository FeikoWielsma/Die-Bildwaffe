#include "StudentHistogramCreator.h"


void StudentHistogramCreator::doAlgorithm(const IntensityImage& input, StudentHistogram& dst)
{
	for (int x = 0; x < input.getWidth(); ++x){
		for (int y = 0; y < input.getHeight(); ++y){
			dst.addIntensity(input.getPixel(x, y));
		}
	}
}