#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int t = 0; t != 4; ++t) {
        for (int i = 0; i <= 9; i++) {
            int spaces;
            int stars;

            switch (t) {
            case 0:
                spaces = 0;
                stars = 1 + i;
                break;
            case 1:
                spaces = 0;
                stars = 10 - i;
                break;
            case 2:
                spaces = i;
                stars = 10 - i;
                break;
            case 3:
                spaces = 9 - i;
                stars = 1 + i;
                break;
            }

            // repeat spaces times
            for(int j = 0; j != spaces; j++) {
                printf("%s"," ");
            }

            // repeat stars times
            for(int j = 0; j != stars; j++) {
                printf("%s","*");
            }
            puts("");
        }
    }

    return 0;

}

