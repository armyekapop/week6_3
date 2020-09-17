#include <stdio.h>
int main() {
    int rows, coef = 1;
    printf("rows: ");
    scanf_s("%d", &rows);
    for (int i = 0; i < rows; i++) 
    {
        for (int space = 0; space < rows - i; space++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}