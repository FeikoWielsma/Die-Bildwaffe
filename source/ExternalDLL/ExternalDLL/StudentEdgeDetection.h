#pragma once

#include "Algorithm.h"
#include "IntensityImage.h"
#include <map>

class Neighborhood{
public:
	Neighborhood(int size) :
		size{ size }
	{
	}

	void add(int x, int y, int value){
		if (x > -size && x <= size && y > -size && y <= size){
			mask[x][y] = value;
		}
	}

	int get(int x, int y){
		try{
			return mask[x][y];
		}
		catch (std::exception){
			return 0;
		}
	}

	int getSize(){
		return size;
	}
private:
	int size;
	std::map<int, std::map<int, int>> mask;
};



class StudentEdgeDetection : public Algorithm<IntensityImage, IntensityImage>
{
public:
	void doAlgorithm(const IntensityImage &input, IntensityImage &dst) override;

private:
	Neighborhood neighborhood{ 3 };
};

