#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(isPrime(arr[i]))
            sum += arr[i];
    }

    printf("Sum of prime elements = %d", sum);
    return 0;
}