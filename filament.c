#include <stdio.h>

// Function declarations
void showNegatives();
void biggestInMatrix();

int main() {
    int option;

    while (1) {
        printf("\n=== MENU ===\n");
        printf("1. Display Negative Numbers from 1D Array\n");
        printf("2. Find Maximum Number in 2D Array\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 0) {
            printf("Program terminated.\n");
            break;
        }

        switch (option) {
            case 1:
                showNegatives();
                break;
            case 2:
                biggestInMatrix();
                break;
            default:
                printf("Invalid input! Try again.\n");
        }
    }

    return 0;
}

// Function for Question 1
void showNegatives() {
    int n, i;

    printf("\n--- Negative Elements in Array ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size must be greater than 0.\n");
        return;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative values are: ");
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

// Function for Question 2
void biggestInMatrix() {
    int r, c;

    printf("\n--- Largest Element in Matrix ---\n");
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter cols: ");
    scanf("%d", &c);

    if (r <= 0 || c <= 0) {
        printf("Row/Col must be positive.\n");
        return;
    }

    int mat[r][c];
    printf("Enter elements of %d x %d matrix:\n", r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int largest = mat[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] > largest) {
                largest = mat[i][j];
            }
        }
    }

    printf("Maximum element: %d\n", largest);
}
