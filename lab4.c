#include <stdio.h>
#include <triangle.h>

int main() {
    double a, b, c;

    printf("vvedite dlini storon treygolnika (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Oshibka: vvedennie znachenia ne mogyt bit storonami treygolnika.\n");
        return 1;
    }

    double perimeter = calculate_perimeter(a, b, c);
    double area = calculate_area(a, b, c);

    printf("P treygolnika: %.2lf\n", perimeter);
    printf("S treygolnika: %.2lf\n", area);

    return 0;
}
