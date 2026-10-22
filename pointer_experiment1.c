#include <stdio.h>

int x = 10;
int *p = &x;
int **r = &p;

int main()
{
    printf("The value x: %d", x);
    printf("\n");
    printf("The dereferenced R: %d", **r);
    printf("\n");
    return 1;
}