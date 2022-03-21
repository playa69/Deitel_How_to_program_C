#include <stdio.h>
#include <stdlib.h>

void f(int x) {
    printf("f!!! %d\n", x);
}

int main()
{
    int *pi;
    int* pi2, gopnik;
    gopnik = 10;

    void (*pf)(int);

    pf = &f;
    pf(10);
    (*pf)(11);
    pf = f;
    pf(12);
    (*pf)(13);

    int x = 10;
    printf("Hello world! %d\n", x);

    // px = pointer to const int

    int const *px2 = &x;


    const int *px = &x;
    // badpx = const pointer to int
    int * const badpx = (int *) px;

    // badpx = (int *) px;

    *(int *)px = 66;
    // *badpx = 55;

    printf("Hello world! %d\n", x);

    return 0;
}
