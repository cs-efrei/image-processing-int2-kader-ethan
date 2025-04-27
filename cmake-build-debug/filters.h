#ifndef FILTERS_H
#define FILTERS_H

#include "bmp8.h"

void bmp8_negative(t_bmp8 *img);
void bmp8_brightness(t_bmp8 *img, int value);
void bmp8_threshold(t_bmp8 *img, int threshold);

void bmp8_applyFilter(t_bmp8 *img, float **kernel, int kernelSize);

#endif
