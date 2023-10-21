#include <stdio.h>
int main() {
    int arr[100], size, i, index, insertValue, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Current array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the index for insertion: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index for insertion.\n");
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &insertValue);
        for (i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = insertValue;
        size++; 
    }
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the index for deletion: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index for deletion.\n");
    } else {
        for (i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--; 
    }
    printf("Array after deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
