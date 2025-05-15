// ColorCoder.cpp
#include "ColorCoder.h"
#include <stdexcept>

namespace TelCoColorCoder {

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
