#include "xfeatures2d.h"
#include "SIFTDetector.h"
#include "SURFDetector.h"

NAN_MODULE_INIT(XFeatures2d::Init) {
	SIFTDetector::Init(target);
	SURFDetector::Init(target);
};