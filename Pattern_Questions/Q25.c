#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
       for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == rows - 1) {
                printf("%d ", k + 1);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
