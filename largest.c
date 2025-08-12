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

    int max = a[0][0];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);
    return 0;
}
