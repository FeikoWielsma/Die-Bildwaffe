#include "StudentScaling.h"
#include <math.h>


void StudentScaling::doAlgorithm(const IntensityImage& input, IntensityImage& dst)
{
	double inputSize = input.getWidth()*input.getHeight();
	double targetSize = static_cast<double>(targetSizeX)*static_cast<double>(targetSizeY);
	double scale = 1.0 / sqrt(inputSize / targetSize);

	dst.set(static_cast<int>(input.getWidth()*scale), static_cast<int>(input.getHeight()*scale));

	for (int x = 0; x < dst.getWidth(); ++x)
	{
		for (int y = 0; y < dst.getHeight(); ++y)
		{
			double deltaX = x / scale - floor(x / scale);
			double deltaY = y / scale - floor(y / scale);
			double p = input.getPixel( floor(x / scale), floor(y / scale) ) +
				( input.getPixel( ceil(x / scale), floor(y / scale) ) -
				input.getPixel( floor(x / scale), floor(y / scale) ) ) *
				deltaX;

			double q = input.getPixel( floor(x / scale), ceil(y / scale) ) +
				( input.getPixel( ceil(x / scale), ceil(y / scale) ) -
				input.getPixel( floor(x / scale), ceil(y / scale) ) ) *
				deltaX;

			int newPixel = p + (q - p) * deltaY;
			dst.setPixel(x, y, newPixel);
		}
	}
}
