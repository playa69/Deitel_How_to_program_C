#include <stdio.h>
#include <stdlib.h>

void print_row(char edge[], char middle[], int k, int j) {
    int i = 0;

    while(i<=k-1) {
        if (i==0)
            printf_s("%s", edge);
        else if (i==k-1) {
            printf_s("%s", edge);
        } else {

           //if ( (i - k/2)*(i - k/2) + (j - k/2)*(j - k/2) == 625 ) //circle
             if ( (i - k/2)*(i-k/2)/10 + 10 == (k-j) )        // parabola

                printf_s("%s", "$ ");
            else
                printf_s("%s", middle);
        }
        i++;
    }
    puts("");
}

int main(int argc, char* argv[]) {
    int response;
    do {
        int k, j=0;
        printf_s("%s", "put square dim: \n");
        scanf("%d", &k);
        puts("");
        while(j<=k-1) {
            if (j == 0 || j == k - 1)
                print_row("* ", "- ", k, j);
            else
                print_row("* ", ". ", k, j);
            j++;
        }
        puts("more? 1y");
        scanf("%d", &response);
    } while(response==1);
    return 0;
}



