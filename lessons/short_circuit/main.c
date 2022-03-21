#include <stdio.h>
#include <stdlib.h>

int main()
{
    if (0 || printf("Hello world!\n")) {
        printf("1\n");
    } else {
        printf("0\n");
    }


    int arr[] = {-10, -20, -3, -5, -7, -10, -2, -3, -5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i < n && arr[i] < 0) {
        printf("%d ", arr[i]);
        ++i;
    }

    puts("");


    return 0;
}
