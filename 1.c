#include <stdio.h>
int search(int key) {
    int index = hash (key);
    int count = 0;
    while (count < tableSize) {
        if (table[index] == key) {
            return index ;
        }
    else if (table[index] == NULL) {
        return -1 ;
    }
    else {
        index = (index + 1) % tableSize ;
        count++ ;
    }

    return -1 ;
}

int hash (int key) {
    return key % tableSize ;
}
while (count <tableSize) {
    if (table[index] == key) {
        return index ;
    }
    else if (table[index] == NULL) {
        return -1 ;
    }
    else {
        index = (index + 1) % tableSize ;
        count++ ;
    }
}