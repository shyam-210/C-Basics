#include <stdio.h>
#include <stdlib.h>
int compareAscending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {7, 3, 9, 2, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    qsort(arr, size, sizeof(int), compareAscending);
    printf("Array sorted in ascending order: ");
    printArray(arr, size);

    qsort(arr, size, sizeof(int), compareDescending);
    printf("Array sorted in descending order: ");
    printArray(arr, size);

    return 0;
}
