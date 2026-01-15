#include <stdio.h>

#define BUFFER_SIZE 5  /* You can change to 10 as in the description */

/* Inserts a new sample into the circular buffer */
void insertSample(int buffer[], int *count, int *headIndex, int value) {
    /* Store value at current headIndex */
    buffer[*headIndex] = value;

    /* Move headIndex to the next position using circular indexing */
    *headIndex = (*headIndex + 1) % BUFFER_SIZE;

    /* Increase count until buffer is full */
    if (*count < BUFFER_SIZE) {
        (*count)++;
    }
}

/* Prints all stored samples from oldest to newest */
void printBufferChronological(int buffer[], int count, int headIndex) {
    int i, index;

    if (count == 0) {
        printf("No samples stored.\n");
        return;
    }

    /* The oldest element is at (headIndex - count + BUFFER_SIZE) % BUFFER_SIZE */
    index = (headIndex - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Samples (oldest to newest): ");
    for (i = 0; i < count; i++) {
        printf("%d ", buffer[index]);
        index = (index + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main(void) {
    int buffer[BUFFER_SIZE];
    int count = 0;      /* Number of valid samples in buffer */
    int headIndex = 0;  /* Next write position */
    int value;
    int choice;

    while (1) {
        printf("\n1. Insert new sample\n");
        printf("2. Print all samples (oldest -> newest)\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &value);
            insertSample(buffer, &count, &headIndex, value);
        } else if (choice == 2) {
            printBufferChronological(buffer, count, headIndex);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
