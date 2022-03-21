#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Hello world!\n");

    for (int i = 0; i != 40; ++i) {
        srand(10000 + i);
        int r1 = rand();
        int r2 = rand();
        printf("%d: %d %d\n", i, r1, r2);
    }

    return 0;
}
