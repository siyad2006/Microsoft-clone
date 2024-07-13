#include<stdio.h>

int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! Number should be in the range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter a number: ", i + 1);
        scanf("%f", &num[i]);
        if ((int)num[i] % 2 != 0) { // Check if the number is odd
            sum += num[i];
        }
    }

    avg = sum / n;
    printf("Average of odd elements = %.2f\n", avg);

    return 0;
}