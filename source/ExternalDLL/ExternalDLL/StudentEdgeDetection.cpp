#include "StudentEdgeDetection.h"
#include <iostream>


void StudentEdgeDetection::doAlgorithm(const IntensityImage &input, IntensityImage &dst) {
	neighborhood.add(-1, -1, 0);
	neighborhood.add(0, -1, 1);
	neighborhood.add(1, -1, 0);

	neighborhood.add(-1, 0, 1);
	neighborhood.add(0, 0, -4);
	neighborhood.add(1, 0, 1);

	neighborhood.add(-1, 1, 0);
	neighborhood.add(0, 1, 1);
	neighborhood.add(1, 1, 0);

	int neighborEdge = neighborhood.getSize() / 2;

	dst.set(input.getWidth(), input.getHeight());

	for (int x = neighborEdge; x < input.getWidth() - neighborEdge; ++x){
		for (int y = neighborEdge; y < input.getHeight() - neighborEdge; ++y){

			float newIntensity = 0;
			for (int i = -neighborEdge; i <= neighborEdge; ++i)
			{
				for (int j = -neighborEdge; j <= neighborEdge; ++j)
			 	{
					newIntensity += input.getPixel(x + i, y + j) * neighborhood.get(i, j);
			 	}
			}

			newIntensity /= neighborhood.getSize() * neighborhood.getSize()-4;

			if (newIntensity < 7){
				dst.setPixel(x, y, 0);
			}
			else{
				dst.setPixel(x, y, 255);
			}
		}
	}
}