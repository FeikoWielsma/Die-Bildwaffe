#include "StudentLocalization.h"

bool StudentLocalization::stepFindHead(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseMouthAndChin(const IntensityImage &image, FeatureMap &features) const {
	Feature left = features.getFeature(Feature::FEATURE_HEAD_LEFT_SIDE);
	Feature right = features.getFeature(Feature::FEATURE_HEAD_RIGHT_SIDE);
	Feature top = features.getFeature(Feature::FEATURE_HEAD_TOP);
	std::cout << "left x: " << left.getX() << std::endl;
	std::cout << "right x: " << right.getX() << std::endl;
	std::cout << "middle: " << top.getX() << std::endl;

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