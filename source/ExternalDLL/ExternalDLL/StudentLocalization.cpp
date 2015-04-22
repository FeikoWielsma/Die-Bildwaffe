#include "StudentLocalization.h"
#include "IntensityImageStudent.h"

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

	IntensityImageStudent sample{ 2, image.getHeight() - static_cast<int>(top.getY()) };

	for (int y = 0; y < sample.getHeight(); ++y){
		std::cout << y << ": ";
		for (int x = 0; x < 2; ++x){
			sample.setPixel(x, y, image.getPixel(static_cast<int>(top.getX()) + (2 / 2) - x, static_cast<int>(top.getY()) + y));
			std::cout << static_cast<int>(sample.getPixel(x, y));
			std::cout << ' ';
		}
		std::cout << std::endl;
	}

	return false;
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