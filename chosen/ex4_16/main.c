#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0, j=0;
    // A triangle
    for (i = 0; i <= 9; i++) {
        for( j = 0; j<=9; j++) {
            if (j <= i)
                printf("%s","*");
            else
                ;
                //printf("%s"," ");

        }
        puts("");
    }

    //B  triangle
    i=0, j=0;

    for (i = 0; i <= 9; i++) {
        for( j = 0; j<=9; j++) {
            if (j >= i)
                printf("%s","*");
            else
                ;
        }
        puts("");
    }

    //C triangle
    i=0, j=0;

    for (i = 0; i <= 9; i++) {
        for( j = 0; j<=9; j++) {
            if (j >= i)
                printf("%s","*");
            else
                printf("%s"," ");

        }
        puts("");
    }

    //B  triangle
    i=0, j=0;

    for (i = 0; i <= 9; i++) {
        for( j = 0; j<=9; j++) {
            if (j <= 8 - i)
                printf("%s"," ");
            else
                printf("%s","*");
        }
        puts("");
    }



    return 0;

}



/*          printf("%s","*");
            printf("%s"," ");
*/
