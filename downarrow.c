#include<stdio.h>
int main(void){
    int i,j;
    int row;
    printf("enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=(row+1)-i || j>=(row-1)+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}