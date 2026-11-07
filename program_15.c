//PRINT A BUTTERFLY PATTERN.
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    // Upper half of the butterfly
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf(" ");

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the butterfly
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf(" ");

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}