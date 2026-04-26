#include "ColorSpaceDistance.hpp"

#include "Color.hpp"

namespace pixelmancy {

const auto DISTANCE = [](int red, int green, int blue) { return red + green + blue;};

int eucledianDistance(const Color& a, const Color& b){
    int deltaRed = b.red - a.red;
    int deltaGreen = b.green - a.green; 
    int deltaBlue = b.blue - a.blue;
    int dredSquared = deltaRed * deltaRed;
    int dgreenSquared = deltaGreen * deltaGreen;
    int dblueSquared = deltaBlue * deltaBlue;
    return sqrt(DISTANCE(dredSquared, dgreenSquared, dblueSquared));
}

ColorSpaceDistance::ColorSpaceDistance(const Color& a_clr) : clr(a_clr), distance(eucledianDistance(a_clr, Color(0, 0, 0)))
{
}

int ColorSpaceDistance::getDistantTo(const Color& referenceColor) const
{
    // TODO: if need to prefer actual human eye colors
    // or do this in a different color space which more suitable for human vistion
    return eucledianDistance(clr, referenceColor);
}
} // namespace pixelmancy
