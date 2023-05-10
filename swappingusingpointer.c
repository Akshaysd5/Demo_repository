#include <stdio.h>

void swap(int *x, int *y);

int main() 
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}

void swap(int *x, int *y) 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

