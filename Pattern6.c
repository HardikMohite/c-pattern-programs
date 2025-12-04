#include<stdio.h>
int main(){
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        int ascii=65;
        for (int j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
           
            printf("%c ",ascii);
            ascii++;
        }
        printf("\n");
    }
    return 0;
}