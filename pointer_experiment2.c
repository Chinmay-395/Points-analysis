#include <stdio.h>

int *create_number()
{
    int x = 42;

    return &x;
}

int main()
{
    // int *p = create_ptr_func();
    // printf("dereferenced p: %d \n", *p);
    // printf("p: %d \n", &p);

    int *p = create_number();
    printf("%d\n", *p);

    return 1;
}