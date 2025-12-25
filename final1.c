#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ciro[12];
    int i, j;

    srand(time(NULL));
    printf("Uretilen aylik ciro verileri \n");
    for (i = 0; i < 12; i++) {
        ciro[i] = (rand() % 10) + 1;
        printf("%d. Ay: %dK\n", i + 1, ciro[i]);
    }

    printf("\n Yatay Bar Grafigi \n");

    for (i = 0; i < 12; i++) {
        
        printf("%2d. : ", i + 1);

        for (j = 0; j < ciro[i]; j++) {
            printf(" * ");
        }

        printf("\n");
        
    }
    printf("\nDikey bar girafigi\n");
    for (i = 10; i >= 1; i--) { 
        for (j = 0; j < 12; j++) { 
            if (ciro[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    for (i = 1; i <= 12; i++) {
        printf("%-2d", i);
    }
    printf("\n");

    return 0;
}