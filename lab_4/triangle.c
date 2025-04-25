#include <math.h>
#include "triangle.h"
int is_valid_triangle (double a, double b, double c){

	return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculate_perimeter (double a, double b, double c) {
    return a + b + c;
}

double calculate_area (double a, double b, double c) {
    double p = calculate_perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
