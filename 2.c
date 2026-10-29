#include <stdio.h>
int tableSize = 10;
int table[10] = {0};

int hash(int key) {
    return key % tableSize;
}

int delete(int key) {
    int index = hash(key);
    int count = 0;
    while (count < tableSize) {
        if (table[index] == key) {
            table[index] = 0;
            return 1;
        }
        else if (table[index] == 0) {
            return 0;
        }
        else {
            index = (index + 1) % tableSize ;
            count++ ;
        }
    }
    return 0;
}

int main(void) {
    initTable();

    insert(10);
    insert(20);
    insert(30);

    printTable();

    printSearch(20);
    printSearch(40);
    printSearch(10);

    delete(20);
    printTable();
}
