#include "cpu_impl.h"
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;

void compute_gradient_magnitude_optimized(const double *sobel_x, const double *sobel_y, int height, int width, double *gradient_magnitude) {
    compute_gradient_magnitude(sobel_x, sobel_y, height, width, gradient_magnitude);
}