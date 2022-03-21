#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int x;
    sscanf("10 20 30 40", "%d", &x);
    printf("x = %d\n", x);

    return 0;
}
