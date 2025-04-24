#include <stdio.h>
#include "triangle.h"

int main() {
    double a, b, c;

    printf("Vvedite dlini storon treygolnika (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (!is_valid_triangle(a, b, c)) {
        printf("Oshibka: iz takih storon nelzya postroit treygolnik.\n");
        return 1;
    }

    double perimeter = calculate_perimeter(a, b, c);
    double area = calculate_area(a, b, c);

    printf("P treygolnika: %.2lf\n", perimeter);
    printf("S treygolnika: %.2lf\n", area);

    return 0;
}
s
