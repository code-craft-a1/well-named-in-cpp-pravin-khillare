// ColorCoder.h
#ifndef COLOR_CODER_H
#define COLOR_CODER_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    const int numberOfMajorColors = 5;
    const int numberOfMinorColors = 5;

    extern const char* MajorColorNames[numberOfMajorColors];
    extern const char* MinorColorNames[numberOfMinorColors];

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif // COLOR_CODER_H
