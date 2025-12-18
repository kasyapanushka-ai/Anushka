
#include <stdio.h>
#define SIZE 5


int buffer[SIZE];
int in = 0, out = 0;

int full = 0;
int empty = SIZE;
int mutex = 1;

int wait(int s) {
    return (--s);
}

int signal(int s) {
    return (++s);
}

void produce() {
    if (empty == 0) {
        printf("\nBuffer is FULL! Cannot produce.\n");
        return;
    }

    mutex = wait(mutex);
    empty = wait(empty);

    int item;
    printf("Enter item to produce: ");
    scanf("%d", &item);

    buffer[in] = item;
    printf("Produced item %d at position %d\n", item, in);

    in = (in + 1) % SIZE;

    full = signal(full);
    mutex = signal(mutex);
}

void consume() {
    if (full == 0) {
        printf("\nBuffer is EMPTY! Cannot consume.\n");
        return;
    }

    mutex = wait(mutex);
    full = wait(full);

    int item = buffer[out];
    printf("Consumed item %d from position %d\n", item, out);

    out = (out + 1) % SIZE;

    empty = signal(empty);
    mutex = signal(mutex);
}

int main() {
    int choice;

    printf("=== PRODUCER-CONSUMER SIMULATION USING SEMAPHORES ===\n");

    while (1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                produce();
                break;
            case 2:
                consume();
                break;
            case 3:
                printf("\nExiting simulation.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}