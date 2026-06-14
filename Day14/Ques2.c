#include <stdio.h>

void findFrequency(int arr[], int n, int key) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count > 0) {
        printf("Element %d occurs %d times in the array.\n", key, count);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    findFrequency(arr, n, key);

    return 0;
}

