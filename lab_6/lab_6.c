#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
	FILE *out = fopen("output.txt", "w");
    int year;
    char name[100];g
    
    while (fscanf(in, "%[^0-9]%d", name, &year) == 2)
        if (year > 1980)
            fprintf(out, "%s%d\n", name, year);
    
    fclose(in); fclose(out);
    return 0;
}
