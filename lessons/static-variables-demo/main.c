#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f() {
    int x = 0;
    static int sx = 0;

    // static char *day[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "nineth", "tenth", "eleventh", "twelfth"};

    static char *day[2];

    if (sx == 0) {
        const char *s1 = malloc(20);
        strcpy(s1, "first");

        const char *s2 = malloc(20);
        strcpy(s2, "second");

        day[0] = s1;
        day[1] = s2;
    }


    for (int i = 0; i != 2; ++i) {
        printf("%s ", day[i]);
    }
    puts("");

    // day[2] = day[3];
    day[0][0] = 'F';

    // ptr[0] === *(ptr + 0)

    // ++x;
    ++sx;
    // printf("x = %d sx = %d\n", x, sx);
}

int main()
{
    printf("Hello world!\n");
    for (int i = 0; i != 2; ++i)
        f();
    return 0;
}
