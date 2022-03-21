#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Hello world!\n");
    double res = sqrt(12345l*12345l);
    printf("%.16f\n", res);
    printf("%ld\n", (long) floor(res));
    printf("%ld\n", (long) ceil(res));
    return 0;
}
