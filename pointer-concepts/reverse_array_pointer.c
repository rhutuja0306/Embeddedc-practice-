// Program: Reverse Array Using Pointers
// Concept: Two-pointer technique
// Description: Reverses an array in-place using pointer manipulation

#include <stdio.h>
void reverse(int *a, int *b)
{
    int temp;

    while (a < b)
    {
        temp = *a;          //a=start
        *a = *b;
        *b = temp;         //b=end

        a++;   // move forward
       b--;     // move backward
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before reverse:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    reverse(arr, arr + n - 1);   // passing pointers

    printf("\nAfter reverse:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
