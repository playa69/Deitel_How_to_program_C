#include <stdio.h>
#include <stdlib.h>

struct goba {
    struct goba *g;
};

int* f() {
    int *pi = (int *) malloc(sizeof(int));
    return pi;
}

int main()
{
    printf("Hello world!\n");

    int x;

    int *pi = f();
    void *pv;

    *pi = 500;

    pv = (void *) pi;

    printf("%d\n", *pi);
    // !! printf("%d\n", *pv);

    free(pi);

    return 0;
}
