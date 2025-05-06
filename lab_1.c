#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    while(1) {
    double a,b,c,d,x1,x2;
    printf("vvedite a: ");
    scanf("%lf", &a);
    printf("vvedite b: ");
    scanf("%lf", &b);
    printf("vvedite c: ");
    scanf("%lf", &c);
        
    d = b*b - 4*a*c;
    if (d < 0) {
    printf("diskriminant < 0 \n");
    } 
    else if (d == 0) {
    x1 = -b / (2*a);
    printf("x = %lf \n", x1);
    } 
    else {
    x1 = (-b - sqrt(d)) / (2*a);
    x2 = (-b + sqrt(d)) / (2*a);
    printf("x1 = %lf \n", x1);
    printf("x2 = %lf \n", x2);
    }
        
    printf("prodolzhit? (1 - da, 0 - net): ");
    int choice;
    scanf("%d", &choice);
    if (choice == 0) {
    break;
    }
}

    return 0;
}
