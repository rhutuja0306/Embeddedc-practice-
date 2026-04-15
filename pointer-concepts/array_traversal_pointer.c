// Program: Array Traversal using Pointer
// Concept: Pointer Arithmetic
// Description: This program prints values and addresses using pointer 

#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t array[5] = {10, 20, 30, 40, 50};
    uint8_t *p = array;

    for (int i = 0; i < 5; i++) {
        printf("value %d, address %p\n", *p, p);
        *p++;  // move to next element
    }

    return 0;
}
