#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Vvedite chisla: %s\n", argv[0]);
        return 1;
    }

    double sum = 0, min = atof(argv[1]), max = atof(argv[1]);
    int count = argc - 1;

    for (int i = 1; i < argc; i++) {
        double num = atof(argv[i]);
        sum += num;
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("Summa: %.2f\n", sum);
    printf("Min: %.2f\n", min);
    printf("Max: %.2f\n", max);
    printf("Srednee: %.2f\n", sum / count);

    return 0;
}
