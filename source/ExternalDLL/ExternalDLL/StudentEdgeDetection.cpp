#include "StudentEdgeDetection.h"
#include <iostream>

const int mask[3][3] = { { 4, 7, 2 }, { 2, 7, 3 }, { 1, 7, 1 } };

void StudentEdgeDetection::doAlgorithm(const IntensityImage &input, IntensityImage &dst) {
	neighborhood.add(-1, -1, 1);
	neighborhood.add(0, -1, 1);
	neighborhood.add(1, -1, 1);

	neighborhood.add(-1, 0, 1);
	//neighborhood.add(0, 0, 1);
	neighborhood.add(1, 0, 1);

	neighborhood.add(-1, 1, 1);
	neighborhood.add(0, 1, 1);
	neighborhood.add(1, 1, 1);

	int neighborEdge = neighborhood.getSize() / 2;

	dst.set(input.getWidth(), input.getHeight());

	for (int x = neighborEdge; x < input.getWidth() - neighborEdge; ++x){
		for (int y = neighborEdge; y < input.getHeight() - neighborEdge; ++y){
			float newIntensity = 0;
			for (int i = -neighborEdge; i <= neighborEdge; ++i)
			{
				for (int j = -neighborEdge; j <= neighborEdge; ++j)
			 	{
					if (i != 0 && j != 0){
						newIntensity += input.getPixel(x + i, y + j) * neighborhood.get(i, j);
					}
			 	}
			}
			newIntensity /= neighborhood.getSize() * neighborhood.getSize() - 1;
			if (newIntensity < 75){
				dst.setPixel(x, y, 255);
			}
			else{
				dst.setPixel(x, y, 0);
			}
		}
	}
}