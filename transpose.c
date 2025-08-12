#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int a[n][n];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
