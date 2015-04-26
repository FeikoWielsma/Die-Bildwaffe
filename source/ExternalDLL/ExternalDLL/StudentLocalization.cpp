#include "StudentLocalization.h"
#include "IntensityImageStudent.h"
#include <vector>

bool StudentLocalization::stepFindHead(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseMouthAndChin(const IntensityImage &image, FeatureMap &features) const {
	Feature left = features.getFeature(Feature::FEATURE_HEAD_LEFT_SIDE);
	Feature right = features.getFeature(Feature::FEATURE_HEAD_RIGHT_SIDE);
	Feature top = features.getFeature(Feature::FEATURE_HEAD_TOP);

	std::cout << "left head: " << left.getX() << std::endl;
	std::cout << "right head: " << right.getX() << std::endl;
	std::cout << "middle: " << top.getX() << std::endl;
	std::cout << "top head: " << top.getY() << std::endl;

	IntensityImageStudent sample{ sampleWidth, image.getHeight() - static_cast<int>(top.getY()) };

	for (int y = 0; y < sample.getHeight(); ++y){
		for (int x = 0; x < sampleWidth; ++x){
			sample.setPixel(x, y, image.getPixel(static_cast<int>(top.getX()) + (sampleWidth / 2) - x, static_cast<int>(top.getY()) + y));
		}
	}

	std::vector<int> POI;

	for (int y = 0; y < sample.getHeight(); ++y){
		bool line = true;
		for (int x = 0; x < sample.getWidth(); ++x){
			if (sample.getPixel(x, y) == Intensity(255)){
				line = false;
			}
		}
		if (line && y > topOffset){
			int lastNumber = 0;
			try{
				lastNumber = POI.at(POI.size() - 1);
			}
			catch (std::exception){}

			if (y - lastNumber > 3){
				POI.push_back(y);
			}
		}
	}

	for (const auto & p : POI){
		std::cout << p << std::endl;
	}

	if (POI.size() < 3){
		return false;
	}
	else{
		Feature nose{ Feature::FEATURE_NOSE_BOTTOM, Point2D < double > {top.getX(), top.getY() + POI.at(0)} };
		Feature mouth{ Feature::FEATURE_MOUTH_TOP, Point2D < double > {top.getX(), top.getY() + POI.at(1)} };
		Feature mouthM{ Feature::FEATURE_MOUTH_CENTER, Point2D < double > {top.getX(), top.getY() + POI.at(1)+3} };
		Feature mouthB{ Feature::FEATURE_MOUTH_BOTTOM, Point2D < double > {top.getX(), top.getY() + POI.at(1)+6} };
		Feature chin{ Feature::FEATURE_CHIN, Point2D < double > {top.getX(), top.getY() + POI.at(2)} };
		features.putFeature(nose);
		features.putFeature(mouth);
		features.putFeature(mouthM);
		features.putFeature(mouthB);
		features.putFeature(chin);
		return true;
	}
}

bool StudentLocalization::stepFindChinContours(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseEndsAndEyes(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindExactEyes(const IntensityImage &image, FeatureMap &features) const {

	return false;
}