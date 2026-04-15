// Program: Swap Two Numbers Using Pointers
// Concept: Call by Reference
// Description: This program swaps two variables using pointer arguments


#include <stdio.h>
//function for swapping two numbers 
void swap(int *a, int *b)    //function receives addresses not values
{
    int temp;
    temp = *a;   // store value of a
    *a = *b;     // assign value of b to a
    *b = temp;   // assign temp to b
}

int main() {
    int A = 10, B = 20;    

    printf("Before swap: A = %d, B = %d\n", A, B);

    swap(&A, &B);  // passing addresses

    printf(" After swap: A = %d, B = %d\n", A, B);

    return 0;
}
