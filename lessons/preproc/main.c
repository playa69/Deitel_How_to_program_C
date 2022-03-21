#include <stdio.h>
#include <stdlib.h>

#define STRCONST "Hello world!\n"
#define INTCONST 5
#define NDIM 3

int* f() {
    int arr[NDIM];

    // sizeof(arr)/sizeof(arr[0])

    return (int *) malloc(sizeof(int) * 20);

}

int main()
{
    printf(STRCONST);
    printf("%d\n", INTCONST);
    int x = 10;

    // x: l-value

    printf("%d\n", INTCONST);
    printf("%d\n", x);

    x = 5;
    // INTCONST = 5;

    // statically allocated (automatic) array declarations
    int arr[10];        // main's auto variable
    int arr1[INTCONST];

    f();

    int m;
    scanf("%d", &m);
    const int constm = m;

    // constm = 5;

    int arr2[m];

    return 0;
}
