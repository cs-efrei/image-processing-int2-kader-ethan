#include <stdio.h>
#include <stdlib.h>
#include "bmp8.h"

t_bmp8 *bmp8_loadImage(const char *filename) {
    // À compléter plus tard (lecture d'image)
    return NULL;
}

void bmp8_saveImage(const char *filename, t_bmp8 *img) {
    // À compléter plus tard (écriture d'image)
}

void bmp8_free(t_bmp8 *img) {
    if (img) {
        if (img->data) free(img->data);
        free(img);
    }
}

void bmp8_printInfo(t_bmp8 *img) {
    if (img) {
        printf("Image Info:\n");
        printf("Width: %u\n", img->width);
        printf("Height: %u\n", img->height);
        printf("Color Depth: %u\n", img->colorDepth);
        printf("Data Size: %u\n", img->dataSize);
    }
}
