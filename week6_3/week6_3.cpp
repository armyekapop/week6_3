#include <stdio.h>
int main() 
{
    int n, coef = 1;
    printf("power number : ");
    scanf_s("%d", &n);
    int rows = n + 1;
    for (int i = 0; i < rows; i++) 
    {
        for (int space = 0; space < rows - i; space++)
        {
            printf("    ");
        }
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef =  coef *(i - j + 1) / j;
            }
            printf(" %6d ", coef);
        }
        printf("\n");
    }
    return 0;
}