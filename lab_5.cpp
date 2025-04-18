#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

int main() {
    int n;
    char operation
    
    printf("Vvedite razmer matric n: ");
    scanf("%d", &n);
    
    double **matrix1 = allocate_matrix(n);
    double **matrix2 = allocate_matrix(n);
    
    printf("Vvedite elementi pervoy matrici:\n");
    input_matrix(matrix1, n);
    
    printf("Vvedite elementi vtoroy matrici:\n");
    input_matrix(matrix2, n);
    
    printf("Vvedite operaciu (+, -, *): ");
    scanf(" %c", &operation);
    
    double **result = perform_matrix_operation(matrix1, matrix2, n, operation);
    
    if (result == NULL) {
        printf("Oshibka: nevernaya operacia ili pamyat ne videlena.\n");
        return 1;
    }
    
    printf("Rezultat:\n");
    print_matrix(result, n);
    
    free_matrix(matrix1, n);
    free_matrix(matrix2, n);
    free_matrix(result, n);
    
    return 0;
}
