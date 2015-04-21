#include "StudentIntensityConvertor.h"


void StudentIntensityConvertor::doAlgorithm(const RGBImage& input, IntensityImage& dst)
{
	dst.set(input.getWidth(), input.getHeight());

	for (int i = 0; i < input.getWidth() * input.getHeight(); ++i){
		Intensity in = Intensity(
			(input.getPixel(i).r * RtoGrayScale) + 
			(input.getPixel(i).g * GtoGrayScale) +
			(input.getPixel(i).b * BtoGrayScale)
		);
		dst.setPixel(i, in);
	}
}