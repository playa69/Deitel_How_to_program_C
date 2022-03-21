#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int i = 5.9;
    float f = 5;

    printf("%d %f\n", i, f);

    f = i;
    printf("%d %f\n", i, f);

    return 0;
}
