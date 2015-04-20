#include "StudentHistogram.h"
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>


StudentHistogram::StudentHistogram()
{
	for (int i = 0; i < 255; ++i){
		intensityMap[Intensity(i)] = 0;
	}
}


StudentHistogram::StudentHistogram(const StudentHistogram &other)
{
}

StudentHistogram::~StudentHistogram()
{
}


void StudentHistogram::addIntensity(Intensity intensity, int amount){
	intensityMap[intensity] += amount;
}

int StudentHistogram::getIntensity(Intensity intensity) const{
	return intensityMap.at(intensity);
}

void StudentHistogram::outputFile(){
	std::string filename = "histograms/histogram.txt";
	//std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	//filename += std::ctime(&time);
	std::ofstream of(filename);

	for (int i = 0; i <= 255; i += 5){
		of << i;

		int skips;
		if (i < 10){
			skips = 4;
		}
		else if (i < 100){
			skips = 3;
		}
		else{
			skips = 2;
		}
		for (int i2 = 0; i2 < skips; ++i2){
			of << ' ';
		}
	}
	of << std::endl;


	for (int i = 0; i < 255; ++i){
		of << '-';
	}
	of << std::endl;


	for (int i = 0; i < histogramHeight; ++i){
		for (int i2 = 0; i2 < 255; ++i2){
			if (intensityMap[Intensity(i2)] > i * histogramHeight){
				of << '|';
			}
			else{
				of << ' ';
			}
		}
		of << std::endl;
	}
	
}