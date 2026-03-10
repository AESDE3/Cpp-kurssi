/**
 * @file rgbapixel.h
 * Definition of the RGBAPixel class for the EasyPNG library.
 *
 * @author Chase Geigle
 * @author Anna LaValle
 * @date Created: Spring 2012
 * @date Modified: Spring 2025
 */

#include <stdint.h>

// Your code here


#ifndef RGBAPIXEL_H
#define RGBAPIXEL_H

class RGBAPixel{

    private:

    public:
    RGBAPixel();
    RGBAPixel(uint8_t _r, uint8_t _g, uint8_t _b) : red(_r), green(_g), blue(_b), alpha(255) {}
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;

};
#endif // RGBAPIXEL_H

