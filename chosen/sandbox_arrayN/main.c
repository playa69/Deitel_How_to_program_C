#include <stdio.h>
#include <stdlib.h>

int main () {

    for(int rows = 1 ; rows<15; rows++) {
        for( int columns = 0; columns <15; columns ++) {
            int a[rows][columns];
            for (int i = 0; i != rows; ++i) {
                for (int j = 0; j != columns; ++j)
                    a[i][j] = i * columns + j;
            }

            for (int i = 1; i != rows; ++i) {
                for (int j = 0; j != columns; ++j)
                    printf("%10d", a[i][j]);
                puts("");
            }
        }

    }
    return 0;
}
