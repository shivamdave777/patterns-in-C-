#include <stdio.h>

int main() {
    int i, j, k, num;

    // Q.1 Right half triangle starting from 41
    printf("Q.1 Right Half Triangle Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 41; j < 41 + i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Q.2 Floyd's triangle starting from 11
    printf("\nQ.2 Floyd's Triangle Pattern:\n");
    num = 11;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    // Q.3 Left half triangle
    printf("\nQ.3 Left Half Triangle Pattern:\n");
    for(i = 5; i >= 1; i--) {
        for(k = 1; k < i; k++) {
            printf("  ");
        }
        for(j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Q.4 Inverted Left half triangle (1 0 pattern)
    printf("\nQ.4 Inverted Left Half Triangle Pattern:\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    // Q.5 Full Pyramid pattern
    printf("\nQ.5 Full Pyramid Pattern:\n");
    for(i = 5; i >= 1; i--) {
        for(k = 5; k > i; k--) {
            printf("  ");
        }
        for(j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        for(j = 5 - 1; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Q.6 Custom numeric pattern
    printf("\nQ.6 Custom Numeric Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("   ");
        for(j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Q.7 Custom alphabetic pattern
    printf("\nQ.7 Custom Alphabetic Pattern:\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
