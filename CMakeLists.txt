cmake_minimum_required(VERSION 3.24)
project(project_image_processing_in_c C)

set(CMAKE_C_STANDARD 99)

add_executable(project_image_processing_in_c
        main.c
        bmp8.c
        filters.c
        histogram.c
)
