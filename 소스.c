#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_TERMS 100

struct term {
    int row;
    int col;
    int value;
};

int main() {
    struct term a[MAX_TERMS], b[MAX_TERMS];
    int numRows, numCols, numTerms;

    // Input size of matrix and number of non-zero terms
    printf("Enter number of rows: ");
    scanf("%d", &numRows);
    printf("Enter number of columns: ");
    scanf("%d", &numCols);
    printf("Enter number of non-zero terms: ");
    scanf("%d", &numTerms);

    
    printf("Enter the %d non-zero terms:\n", numTerms);
    for (int i = 0; i < numTerms; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d%d%d", &a[i].row, &a[i].col, &a[i].value);
    }

    
    int numTermsT = 0;
    for (int j = 0; j < numCols; j++) {
        for (int i = 0; i < numTerms; i++) {
            if (a[i].col == j) {
                b[numTermsT].row = a[i].col;
                b[numTermsT].col = a[i].row;
                b[numTermsT].value = a[i].value;
                numTermsT++;
            }
        }
    }

   
    printf("\nThe transposed matrix is:\n");
    for (int i = 0; i < numTermsT; i++) {
        printf("%d %d %d\n", b[i].row, b[i].col, b[i].value);
    }

    return 0;
}
