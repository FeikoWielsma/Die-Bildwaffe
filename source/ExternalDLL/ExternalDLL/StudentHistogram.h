#pragma once

#include "IntensityImage.h"
#include <map>

class StudentHistogram 
{
public:
	StudentHistogram();
	StudentHistogram(const StudentHistogram &other);
	~StudentHistogram();

	void addIntensity(Intensity intensity, int amount = 1);

	int getIntensity(Intensity intensity) const;

	void outputFile();
	
private:
	const int histogramHeight = 20;
	std::map<Intensity, int> intensityMap;
};

