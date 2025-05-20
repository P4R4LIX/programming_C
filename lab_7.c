#include <stdio.h>
#include <string.h>р

typedef struct {
	char name[40];
	char surname[40];
	int year;
}humen;

int main() {
	humen arr1[4], arr2[4];
	int i, j;
	
	for (i = 0; i < 4; i++) {
    	printf("vvedite imya, familiy i daty rozhdeniya cheloveka %d: ", i + 1);
    	scanf("%39s %39s %d", arr1[i].name, arr1[i].surname, &arr1[i].year);
    }
    	memcpy(arr2, arr1, sizeof(arr1));
    	
		for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (arr2[j].year > arr2[j + 1].year) {
                humen temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < 4; i++) {
        printf("%s %s %d\n", arr2[i].name, arr2[i].surname, arr2[i].year);
    }
    
    return 0;
}
