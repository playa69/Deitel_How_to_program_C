#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[5][5];

    for (int i = 0; i != 5; ++i) {
        for (int j = 0; j != 5; ++j)
            a[i][j] = i * 5 + j;
    }

    for (int i = 0; i != 5; ++i) {
        for (int j = 0; j != 5; ++j)
            printf("%10d", a[i][j]);
        puts("");
    }


    int found = 0;

    for (int i = 0; !found && i != 5; ++i) {
        for (int j = 0; !found && j != 5; ++j) {
            printf("%d, %d\n ", i, j);
            if (a[i][j] == 13) {
                printf("found!\n");
                found = 1;
            }
        }
    }


    for (int i = 0; i != 5; ++i) {
        for (int j = 0; j != 5; ++j) {
            printf("%d, %d\n ", i, j);
            if (a[i][j] == 13) {
                printf("found!\n");
                goto gopnix;
            }
        }
    }
    gopnix:




    return 0;
}
