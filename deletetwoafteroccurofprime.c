#include<stdio.h>


// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Your initial array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create a new array to store non-prime elements
    int modifiedArr[n];
    int modifiedSize = 0;

    for (int i = 0; i < n; ++i) {
        if (!isPrime(arr[i])) {
            modifiedArr[modifiedSize] = arr[i];
            modifiedSize++;
        }
    }

    // Print the modified array
    for (int i = 0; i < modifiedSize; ++i) {
        printf("%d ", modifiedArr[i]);
    }

    return 0;
}