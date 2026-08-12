#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int maxHeap[MAX_SIZE];
int minHeap[MAX_SIZE];
int maxSize = 0;
int minSize = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (maxHeap[parent] < maxHeap[index]) {
            swap(&maxHeap[parent], &maxHeap[index]);
            index = parent;
        } else {
            break;
        }
    }
}

void maxHeapifyDown(int index) {
    while (2 * index + 1 < maxSize) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < maxSize && maxHeap[left] > maxHeap[largest]) {
            largest = left;
        }
        if (right < maxSize && maxHeap[right] > maxHeap[largest]) {
            largest = right;
        }
        if (largest != index) {
            swap(&maxHeap[index], &maxHeap[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

void minHeapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (minHeap[parent] > minHeap[index]) {
            swap(&minHeap[parent], &minHeap[index]);
            index = parent;
        } else {
            break;
        }
    }
}

void minHeapifyDown(int index) {
    while (2 * index + 1 < minSize) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if (left < minSize && minHeap[left] < minHeap[smallest]) {
            smallest = left;
        }
        if (right < minSize && minHeap[right] < minHeap[smallest]) {
            smallest = right;
        }
        if (smallest != index) {
            swap(&minHeap[index], &minHeap[smallest]);
            index = smallest;
        } else {
            break;
        }
    }
}

void insertMaxHeap(int value) {
    if (maxSize >= MAX_SIZE) {
        printf("Max heap is full. Cannot insert %d.\n", value);
        return;
    }
    maxHeap[maxSize] = value;
    maxHeapifyUp(maxSize);
    maxSize++;
}

void insertMinHeap(int value) {
    if (minSize >= MAX_SIZE) {
        printf("Min heap is full. Cannot insert %d.\n", value);
        return;
    }
    minHeap[minSize] = value;
    minHeapifyUp(minSize);
    minSize++;
}

int deleteMaxHeapValue(int value) {
    if (maxSize == 0) {
        return 0;
    }
    int index = -1;
    for (int i = 0; i < maxSize; i++) {
        if (maxHeap[i] == value) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        return 0;
    }
    maxHeap[index] = maxHeap[maxSize - 1];
    maxSize--;
    if (index < maxSize) {
        maxHeapifyUp(index);
        maxHeapifyDown(index);
    }
    return 1;
}

int deleteMinHeapValue(int value) {
    if (minSize == 0) {
        return 0;
    }
    int index = -1;
    for (int i = 0; i < minSize; i++) {
        if (minHeap[i] == value) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        return 0;
    }
    minHeap[index] = minHeap[minSize - 1];
    minSize--;
    if (index < minSize) {
        minHeapifyUp(index);
        minHeapifyDown(index);
    }
    return 1;
}

void displayMaxHeap() {
    if (maxSize == 0) {
        printf("Max heap is empty.\n");
        return;
    }
    printf("Max heap elements: ");
    for (int i = 0; i < maxSize; i++) {
        printf("%d ", maxHeap[i]);
    }
    printf("\n");
}

void displayMinHeap() {
    if (minSize == 0) {
        printf("Min heap is empty.\n");
        return;
    }
    printf("Min heap elements: ");
    for (int i = 0; i < minSize; i++) {
        printf("%d ", minHeap[i]);
    }
    printf("\n");
}

void printMenu() {
    printf("\nHeap Menu:\n");
    printf("1. Insert into Max Heap\n");
    printf("2. Delete from Max Heap\n");
    printf("3. Display Max Heap\n");
    printf("4. Insert into Min Heap\n");
    printf("5. Delete from Min Heap\n");
    printf("6. Display Min Heap\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    int value;

    while (1) {
        printMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value to insert into Max Heap: ");
                scanf("%d", &value);
                insertMaxHeap(value);
                break;
            case 2:
                printf("Enter value to delete from Max Heap: ");
                scanf("%d", &value);
                if (deleteMaxHeapValue(value)) {
                    printf("Deleted %d from Max Heap.\n", value);
                } else {
                    printf("Value %d not found in Max Heap.\n", value);
                }
                break;
            case 3:
                displayMaxHeap();
                break;
            case 4:
                printf("Enter value to insert into Min Heap: ");
                scanf("%d", &value);
                insertMinHeap(value);
                break;
            case 5:
                printf("Enter value to delete from Min Heap: ");
                scanf("%d", &value);
                if (deleteMinHeapValue(value)) {
                    printf("Deleted %d from Min Heap.\n", value);
                } else {
                    printf("Value %d not found in Min Heap.\n", value);
                }
                break;
            case 6:
                displayMinHeap();
                break;
            case 7:
                printf("Exiting.\n");
                exit(0);
            default:
                printf("Invalid choice. Please choose 1-7.\n");
        }
    }

    return 0;
}
