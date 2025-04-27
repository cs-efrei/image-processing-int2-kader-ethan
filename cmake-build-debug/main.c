#include <stdio.h>
#include <stdlib.h>
#include "bmp8.h"
#include "filters.h"
#include "histogram.h"

int main() {
    t_bmp8 *img = NULL;
    int choice = 0;

    while (1) {
        printf("\nPlease choose an option:\n");
        printf("1. Open an image\n");
        printf("2. Save an image\n");
        printf("3. Apply a filter\n");
        printf("4. Display image information\n");
        printf("5. Quit\n");
        printf(">>> Your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char path[256];
            printf("File path: ");
            scanf("%s", path);
            img = bmp8_loadImage(path);
            if (img) printf("Image loaded successfully!\n");
            else printf("Failed to load image.\n");
        } else if (choice == 2) {
            if (img) {
                char path[256];
                printf("Save path: ");
                scanf("%s", path);
                bmp8_saveImage(path, img);
                printf("Image saved successfully!\n");
            } else {
                printf("No image loaded!\n");
            }
        } else if (choice == 3) {
            if (img) {
                printf("Please choose a filter:\n");
                printf("1. Negative\n");
                printf("2. Brightness\n");
                printf("3. Threshold\n");
                printf("4. Return\n");
                int filter_choice;
                scanf("%d", &filter_choice);

                if (filter_choice == 1) bmp8_negative(img);
                else if (filter_choice == 2) {
                    int value;
                    printf("Enter brightness adjustment value: ");
                    scanf("%d", &value);
                    bmp8_brightness(img, value);
                } else if (filter_choice == 3) {
                    int threshold;
                    printf("Enter threshold value: ");
                    scanf("%d", &threshold);
                    bmp8_threshold(img, threshold);
                }
            } else {
                printf("No image loaded!\n");
            }
        } else if (choice == 4) {
            if (img) bmp8_printInfo(img);
            else printf("No image loaded!\n");
        } else if (choice == 5) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    bmp8_free(img);
    return 0;
}

