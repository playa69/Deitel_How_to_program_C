#include <stdio.h>
#include <stdlib.h>





int main() {
    // 2^power = degree

    int x;
    scanf("%d", &x);

    int power = 0;
    int degree = 1;
    // 2^0 = 1

    while(degree*2<=x) {

        degree *= 2;
        // printf("degree %d for power %d\n", degree, power);
        power++;
    //printf("%d and %d\n", power, degree);
    }
    for(int i = power; i>=0  ; --i) {
        printf("%d", (x / degree)%2 );
        degree /= 2;
    }



    return 0;
}
