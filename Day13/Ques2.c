#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    avg = (float)sum / n;

    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
