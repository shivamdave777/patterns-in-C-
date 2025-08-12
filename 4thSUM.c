#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowNum, colNum, sum = 0;
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for(j = 0; j < c; j++) {
        printf("%d ", a[rowNum][j]);
        sum += a[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, sum);

    // Column sum
    printf("Enter column number: ");
    scanf("%d", &colNum);
    sum = 0;
    printf("Elements of column %d: ", colNum);
    for(i = 0; i < r; i++) {
        printf("%d ", a[i][colNum]);
        sum += a[i][colNum];
    }
    printf("\nThe sum of a column %d: %d\n", colNum, sum);

    return 0;
}
