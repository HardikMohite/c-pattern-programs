#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print numbers with hollow spaces
        for (int j = 1; j <= i; j++)
        {
            if (i == rows || j == 1 || j == i)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
