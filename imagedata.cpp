/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     September 5 2017
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "imagedata.h"
#include <pgmspace.h>

const unsigned char image_umbrella[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x0c, 0xff, 0xc0, 0x0f, 0xff, 0xf0, 0x07, 
  0xff, 0xf8, 0x07, 0xff, 0xf0, 0x0f, 0xff, 0xc0, 0x0f, 0xff, 0x80, 0x1f, 0xff, 0x00, 0x1f, 0xff, 
  0x00, 0x1f, 0xfc, 0x00, 0x1f, 0xfe, 0x00, 0x1f, 0xf7, 0x00, 0x1f, 0xf3, 0x80, 0x0f, 0xc1, 0xc0, 
  0x0f, 0x80, 0xe0, 0x07, 0x00, 0x70, 0x07, 0x00, 0x30, 0x02, 0x00, 0x30, 0x00, 0x01, 0xf0, 0x00, 
  0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_thunder[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x00, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xff, 0x00, 0x00, 0x7f, 
  0x80, 0x00, 0x1f, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 
  0x00, 0x1c, 0x00, 0x00, 0x30, 0x00, 0x00, 0x60, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_wind[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x39, 0x80, 0x00, 
  0x11, 0x80, 0x00, 0x01, 0x80, 0x0f, 0xff, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x8c, 0x1f, 0xe1, 0x8c, 
  0x1f, 0xf0, 0xf8, 0x00, 0x18, 0x70, 0x01, 0x18, 0x00, 0x03, 0x98, 0x00, 0x01, 0xf0, 0x00, 0x00, 
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_battery[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xff, 0xfe, 0x38, 0x00, 0x07, 0x30, 0x00, 0x1b, 0xf0, 0x00, 0x3b, 0xf0, 0x00, 0x3b, 0xc0, 0x00, 
  0x3b, 0xc0, 0x00, 0x3b, 0xc0, 0x00, 0x3b, 0xc0, 0x00, 0x3b, 0xf0, 0x00, 0x3b, 0xf0, 0x00, 0x3b, 
  0x30, 0x00, 0x1b, 0x38, 0x00, 0x07, 0x1f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_hourglass[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 
  0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 
  0x00, 0x3f, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x80, 0x01, 
  0xf0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 0x07, 
  0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0x7f, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x1f, 0x80, 0x00, 0x00, 0x03, 0xf0, 0x0f, 0xc0, 0x00, 
  0x00, 0x03, 0xe0, 0x07, 0xc0, 0x00, 0x00, 0x07, 0xc0, 0x03, 0xe0, 0x00, 0x00, 0x07, 0xc0, 0x03, 
  0xe0, 0x00, 0x00, 0x0f, 0xc0, 0x03, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 
  0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_palm[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xc0, 0x70, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x03, 0x80, 0x18, 0x03, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0xfe, 0x0c, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0x84, 0x1f, 0xff, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x66, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x36, 0x3f, 0xff, 0xff, 0x80, 
  0x00, 0x07, 0xfe, 0x1e, 0x7f, 0x80, 0x3f, 0xc0, 0x00, 0x1c, 0x07, 0x8f, 0xfc, 0x00, 0x07, 0xe0, 
  0x00, 0x60, 0x00, 0xff, 0xf0, 0x00, 0x01, 0xe0, 0x00, 0x80, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x70, 
  0x01, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x30, 0x02, 0x07, 0x80, 0x1f, 0xff, 0xfe, 0x00, 0x08, 
  0x04, 0x1c, 0x00, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x04, 0x30, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x08, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x09, 0x01, 0xe7, 0xe7, 0xef, 0xff, 0xfc, 0x00, 
  0x0e, 0x03, 0x0f, 0x8f, 0xe3, 0xff, 0xfe, 0x00, 0x1c, 0x0c, 0x1f, 0x1f, 0xf0, 0xff, 0xff, 0x00, 
  0x18, 0x18, 0x3e, 0x3f, 0xf0, 0x3f, 0xff, 0x00, 0x10, 0x30, 0x7c, 0x7e, 0xf8, 0x1f, 0xff, 0x80, 
  0x00, 0x60, 0x78, 0x7e, 0xfc, 0x07, 0xff, 0x80, 0x00, 0x40, 0xf0, 0xfc, 0x7c, 0x03, 0xff, 0xc0, 
  0x00, 0xc1, 0xe1, 0xfc, 0x7e, 0x01, 0xff, 0xc0, 0x00, 0x83, 0xc1, 0xfc, 0x7e, 0x00, 0x7f, 0xc0, 
  0x01, 0x87, 0x81, 0xfc, 0x3e, 0x00, 0x3f, 0xc0, 0x01, 0x8f, 0x03, 0xfc, 0x3f, 0x00, 0x1f, 0xe0, 
  0x01, 0x1e, 0x03, 0xfc, 0x3f, 0x00, 0x0f, 0xe0, 0x01, 0x3e, 0x03, 0xfc, 0x3f, 0x00, 0x07, 0xe0, 
  0x01, 0x3c, 0x07, 0xfc, 0x1f, 0x80, 0x07, 0xe0, 0x01, 0x78, 0x07, 0xfc, 0x1f, 0x80, 0x03, 0xe0, 
  0x01, 0xf8, 0x07, 0xfc, 0x1f, 0x80, 0x01, 0xe0, 0x01, 0xf0, 0x07, 0xfc, 0x1f, 0xc0, 0x00, 0xc0, 
  0x01, 0xf0, 0x07, 0xfc, 0x1f, 0xc0, 0x00, 0x40, 0x01, 0xe0, 0x07, 0xfc, 0x1f, 0xc0, 0x00, 0x40, 
  0x00, 0xe0, 0x03, 0xfc, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xfc, 0x0f, 0xe0, 0x00, 0x00, 
  0x00, 0xc0, 0x03, 0xfc, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x40, 0x03, 0xfc, 0x0f, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xfe, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x0f, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xfe, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_alert[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 
  0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 
  0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_verylowbattery[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x3f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x7f, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_xmas[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xfe, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3c, 0xec, 0x0c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xda, 0x0c, 0x7c, 0x00, 0x00, 
  0x00, 0x01, 0xe0, 0xf7, 0x7c, 0x1e, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x7f, 0xf8, 0x0f, 0x00, 0x00, 
  0x00, 0x03, 0x80, 0x3f, 0xf0, 0x03, 0xc0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 
  0x00, 0x0e, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x00, 0x00, 0x0c, 0x00, 0x40, 0xc1, 0xc0, 0x70, 0x00, 
  0x00, 0x1c, 0x20, 0xe0, 0x40, 0xc0, 0x38, 0x00, 0x00, 0x38, 0x60, 0x00, 0x00, 0x00, 0x1c, 0x00, 
  0x00, 0x38, 0x20, 0x00, 0x00, 0x04, 0x1c, 0x00, 0x00, 0x30, 0x01, 0x81, 0x87, 0x0e, 0x3e, 0x00, 
  0x00, 0x70, 0x07, 0xc7, 0xcf, 0x3f, 0x7e, 0x00, 0x00, 0x7f, 0x8f, 0xef, 0xff, 0xfb, 0xee, 0x00, 
  0x00, 0x7f, 0xdc, 0x7c, 0xf9, 0xf1, 0xc6, 0x00, 0x00, 0xf8, 0xf8, 0x38, 0x20, 0xe0, 0x07, 0x00, 
  0x00, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 
  0x00, 0xc0, 0x00, 0x0c, 0x70, 0x11, 0x07, 0x00, 0x00, 0xc0, 0x00, 0x0e, 0xf0, 0x1f, 0x07, 0x00, 
  0x00, 0xc3, 0xc0, 0x0f, 0xe0, 0x1f, 0x07, 0x00, 0x00, 0xc3, 0xe0, 0x1f, 0xe0, 0x1e, 0x07, 0x00, 
  0x00, 0xc7, 0xc0, 0x1f, 0xf8, 0x1f, 0x07, 0x00, 0x00, 0xc7, 0xe0, 0x0f, 0xf8, 0x03, 0x07, 0x00, 
  0x00, 0xc6, 0xe0, 0x0e, 0xe0, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x00, 0x1c, 0x60, 0x00, 0x0f, 0x00, 
  0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0x0e, 0x00, 
  0x00, 0xe0, 0x00, 0x00, 0x01, 0xef, 0x9e, 0x00, 0x00, 0x70, 0x00, 0x00, 0x73, 0xff, 0xde, 0x00, 
  0x00, 0x70, 0x70, 0xf0, 0xff, 0xbd, 0xfc, 0x00, 0x00, 0x38, 0xf9, 0xfb, 0xff, 0x10, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x9f, 0x8e, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x0e, 0x0e, 0x00, 0x00, 0xf0, 0x00, 
  0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 
  0x00, 0x07, 0x83, 0x82, 0x18, 0x0f, 0xc0, 0x00, 0x00, 0x03, 0xc3, 0x86, 0x18, 0x1f, 0x80, 0x00, 
  0x00, 0x01, 0xe1, 0x02, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0x80, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char image_xmaspresent[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x83, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xc3, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xe3, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1c, 0x72, 0x30, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x32, 0x30, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x3e, 0x23, 0xce, 0x00, 0x00, 0x00, 0x00, 0x07, 0x9e, 0x6f, 0x0c, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xfe, 0x7e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe7, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x78, 0x06, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x16, 0x7c, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0xe0, 0x0f, 0x83, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xc0, 0x07, 0x83, 0xf0, 0x00, 0x0f, 0x00, 
  0x00, 0xc0, 0x0d, 0xc3, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xc0, 0x01, 0x03, 0xb0, 0x00, 0x0f, 0x00, 
  0x00, 0xc0, 0x40, 0x03, 0xf0, 0x64, 0x07, 0x00, 0x00, 0xc3, 0xc0, 0x03, 0xf0, 0x7c, 0x07, 0x00, 
  0x00, 0xe1, 0x80, 0x01, 0xf0, 0x3c, 0x0f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x38, 0x3e, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xfb, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x00, 0x01, 0xb0, 0x00, 0x20, 0x00, 0x00, 0x03, 0x00, 0x01, 0xb0, 0x00, 0x30, 0x00, 
  0x00, 0x03, 0x01, 0x99, 0xb0, 0x00, 0x30, 0x00, 0x00, 0x03, 0x01, 0xf9, 0xf0, 0x00, 0x30, 0x00, 
  0x00, 0x03, 0x01, 0xf1, 0xf0, 0x00, 0x30, 0x00, 0x00, 0x03, 0x01, 0xe1, 0xf0, 0x00, 0x20, 0x00, 
  0x00, 0x03, 0x00, 0x31, 0xf0, 0x00, 0x20, 0x00, 0x00, 0x03, 0xf0, 0x11, 0xf0, 0x60, 0x60, 0x00, 
  0x00, 0x03, 0x70, 0x01, 0xf1, 0xfc, 0x60, 0x00, 0x00, 0x03, 0x78, 0x01, 0xf0, 0xf8, 0x60, 0x00, 
  0x00, 0x03, 0x08, 0x01, 0xf0, 0x78, 0x60, 0x00, 0x00, 0x03, 0x00, 0x01, 0xe0, 0xd8, 0x60, 0x00, 
  0x00, 0x03, 0x00, 0x01, 0xe0, 0x08, 0x60, 0x00, 0x00, 0x03, 0x03, 0x71, 0xe0, 0x00, 0x60, 0x00, 
  0x00, 0x03, 0x03, 0xe1, 0xe0, 0x00, 0x60, 0x00, 0x00, 0x03, 0x07, 0xc1, 0xe0, 0x00, 0x60, 0x00, 
  0x00, 0x03, 0x03, 0xe1, 0xe0, 0x00, 0x60, 0x00, 0x00, 0x07, 0x02, 0x61, 0xe0, 0x00, 0x60, 0x00, 
  0x00, 0x03, 0x00, 0x01, 0xe0, 0x20, 0x60, 0x00, 0x00, 0x03, 0x10, 0x01, 0xe0, 0x7c, 0xe0, 0x00, 
  0x00, 0x03, 0x10, 0x01, 0xe0, 0xf8, 0xe0, 0x00, 0x00, 0x03, 0x1c, 0x01, 0xe0, 0x78, 0xe0, 0x00, 
  0x00, 0x03, 0x1c, 0x03, 0xf0, 0x79, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
