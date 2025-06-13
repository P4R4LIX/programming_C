#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>2
#define FIND_MAX(arr, count) ({ \
    double max_val = -__DBL_MAX__; \
    for (int i = 0; i < (count); i++) { \
        if ((arr)[i] > max_val) { \
            max_val = (arr)[i]; \
        } \
    } \
    max_val; \
})

int main() {
    char input[1000];
    double numbers[100];
    int count = 0;

    printf("Vvedite chisla cherez probel: ");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \n");
    while (token != NULL && count < 100) {
        numbers[count++] = atof(token);
        token = strtok(NULL, " \n");
    }

    if (count == 0) {
        printf("Ne vvedeno ni odnogo chisla!\n");
        return 1;
    }

    double maximum = FIND_MAX (numbers, count);

    printf("Maksimalnoe chislo: %.2f\n", maximum);

    return 0;
}
