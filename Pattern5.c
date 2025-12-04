#include<stdio.h>
int fact(int x){
    if (x==0||x==1)
    {
        return 1;
    }
    return x*fact(x-1);
}
int main(){
    int rows = 4;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <=i; k++)
        {
            int num = fact(i)/(fact(k)*fact(i-k));    
            printf("%d ",num);

        }
        printf("\n");
    }
    return 0;
}