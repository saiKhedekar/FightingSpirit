#include <stdio.h>
#include <stdlib.h>

struct HashItem {
    int key;
    int value;
    int isOccupied;
};

struct HashTable {
    struct HashItem *items;
    int size;
};

int hashFunction1(int key, int size) {
    return key % size;
}

int hashFunction2(int key, int size) {
    return (key / 10) % size;
}

void initTable(struct HashTable *table, int size) {
    table->size = size;
    table->items = (struct HashItem *)malloc(size * sizeof(struct HashItem));
    for (int i = 0; i < size; i++) {
        table->items[i].isOccupied = 0;
    }
}

void insert(struct HashTable *table, int key, int value, int (*hashFunc)(int, int)) {
    int index = hashFunc(key, table->size);
    int originalIndex = index;
    int count = 0;

    while (table->items[index].isOccupied) {
        count++;
        if (count == table->size) {
            printf("Hash table is full. Cannot insert key %d.\n", key);
            return;
        }
        index = (index + 1) % table->size;
    }

    table->items[index].key = key;
    table->items[index].value = value;
    table->items[index].isOccupied = 1;

    printf("Inserted (%d, %d) at index %d\n", key, value, index);
}

void search(struct HashTable *table, int key, int (*hashFunc)(int, int)) {
    int index = hashFunc(key, table->size);
    int start = index;
    int count = 0;

    while (table->items[index].isOccupied && count < table->size) {
        if (table->items[index].key == key) {
            printf("Key %d found with value %d at index %d\n", key, table->items[index].value, index);
            return;
        }
        index = (index + 1) % table->size;
        count++;
        if (index == start) break;
    }

    printf("Key %d not found in the hash table.\n", key);
}

void display(struct HashTable *table) {
    printf("\nHash Table Contents:\n");
    for (int i = 0; i < table->size; i++) {
        if (table->items[i].isOccupied)
            printf("Index %d -> Key: %d, Value: %d\n", i, table->items[i].key, table->items[i].value);
        else
            printf("Index %d -> Empty\n", i);
    }
}

int main() {
    struct HashTable table;
    int size, n, choice, key, value, funcChoice;
    int (*hashFunc)(int, int);

    printf("Enter hash table size: ");
    scanf("%d", &size);
    initTable(&table, size);

    printf("\nSelect hash function:\n");
    printf("1. key %% size\n");
    printf("2. (key / 10) %% size\n");
    printf("Enter choice: ");
    scanf("%d", &funcChoice);

    if (funcChoice == 1)
        hashFunc = hashFunction1;
    else
        hashFunc = hashFunction2;

    while (1) {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                printf("Enter value: ");
                scanf("%d", &value);
                insert(&table, key, value, hashFunc);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(&table, key, hashFunc);
                break;
            case 3:
                display(&table);
                break;
            case 4:
                printf("Exiting...\n");
                free(table.items);
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
