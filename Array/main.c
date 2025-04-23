#include <stdio.h>

#define SIZE 100

int arr[SIZE];
int n = 0;
void insert(int value) {
    if (n < SIZE){
        arr[n++] = value;
        printf("Inserted %d\n", value);
    } else {
        printf("Array is full!\n");
    }
}

void update(int index, int value) {
    if (index >= 0 && index < n) {
        arr[index] = value;
        printf("Updated index %d to %d\n", index, value);
    } else {
        printf("Invalid index!\n");
    }
}

void deleteAt(int index) {
    if (index >= 0 && index < n) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Deleted element at index %d\n", index);
    } else {
        printf("Invalid index!\n");
    }
}
void search(int value) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Found %d at index %d\n", value, i);
            found = 1;
        }
    }
    if (!found) {
        printf("%d not found in array\n", value);
    }
}
void sort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted.\n");
}
void display() {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, value, index;

    while (1) {
        printf("\n--- Array Operations ---\n");
        printf("1. Insert\n");
        printf("2. Update\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Sort\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            printf("Enter index and new value: ");
            scanf("%d %d", &index, &value);
            update(index, value);
            break;
        case 3:
            printf("Enter index to delete: ");
            scanf("%d", &index);
            deleteAt(index);
            break;
        case 4:
            printf("Enter value to search: ");
            scanf("%d", &value);
            search(value);
            break;
        case 5:
            sort();
            break;
        case 6:
            display();
            break;
        case 7:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
