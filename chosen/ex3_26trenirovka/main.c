#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main() {
    //indefinite repetition
    int dummy = -1;
    printf_s(">> sentinel-value %d \n", dummy );
    //make first value
    int a;
    printf_s("%s","enter 1 value: \n");
    scanf("%d", &a);
    if (a == dummy ) {
        printf_s("%s", "bye \n" );
        return 1;
    }
    //make 2 distinct values
    int b;
    do {
        printf_s("%s","enter 2 value: \n");
        scanf_s("%d", &b);
    } while(b == a);

    if (b == dummy ) {
        printf_s("%s","good bye\n");
        return 1;
    }
    //inversion
    if (a > b) {
        int t = b;
        b = a;
        a = t;
    }  // (a,b)
    //loop
    int number = 0;
    int counter = 2;
    while (number != dummy && number != dummy ) {
      //  int counter = 0;
        printf_s( "enter %d value: \n", counter+1);
        scanf("%d", &number);
        if( number > b ) {
            a = b;
            b = number;
        } else if ( number > a && b != number)
            a = number;
        counter++;
    }
    //output
    printf_s(">1st largest %d \n", b);
    printf_s(">2nd largest %d \n", a);
   // uint32_t max = UINT32_MAX;

    return 0;
}
