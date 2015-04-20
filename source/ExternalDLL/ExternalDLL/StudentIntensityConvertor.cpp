#include "StudentIntensityConvertor.h"


void StudentIntensityConvertor::doAlgorithm(const RGBImage& input, IntensityImage& dst)
{
	dst.set(input.getWidth(), input.getHeight());

	for (int i = 0; i < input.getWidth() * input.getHeight(); ++i){
		Intensity in = Intensity((input.getPixel(i).r + input.getPixel(i).g + input.getPixel(i).b) / 3);
		dst.setPixel(i, in);
	}
}