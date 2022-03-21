#include <stdio.h>
#include <stdlib.h>

void printStream();
void delta_printStream();

int main() {
    int dim;  // diamond`s dimension
    dim = 9;
    do{
        int i, j;  // stroka & stolb
        int kMin, kMax; // interval [kmin;kmax] with asteriks
        int focus;  //center point (focus;focus) of diamond
        focus =  dim / 2;
        // matrix loop
        for (i = 0; i <= dim - 1; i++) {
            if(i <= focus) {
                for( j = 0; j <=dim - 1; j++) {
                    kMin = (dim - 1) - focus - i;
                    kMax = (dim - 1) - focus + i;
                    printStream(j, kMin, kMax);
                }
            } else {
                for( j = 0; j <= dim - 1; j++) {
                    kMin = i - focus;
                    kMax = (dim - 1) - kMin;
                    printStream(j, kMin, kMax);
                }
            }
            printf_s("%c", '\n');
        }
        puts("");
        //prompt
        printf_s("%s", "Enter dim: (0stop)\n");
        scanf("%d", &dim);
    }while(dim!=0);

  //return 0;
}

void delta_printStream(int stolb, int paramMin, int paramMax) {
    if ( stolb>=paramMin && stolb<=paramMax )
        printf_s("%c", '.');
    else
        printf_s("%c", '*');
}

void printStream(int stolb, int paramMin, int paramMax) {
    if ( stolb>=paramMin && stolb<=paramMax )
        printf_s("%s", ".SANYA");
    else
        printf_s("%s", "      ");
}

