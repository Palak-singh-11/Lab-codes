#include <stdio.h>

int main() {
    int num;
    int posCount = 0, negCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            posCount++;
        else if (num < 0)
            negCount++;
        else
            zeroCount++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nSummary:\n");
    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
