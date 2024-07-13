#include<stdio.h>
int main(void){
    int i,j;
    printf("enter the number of rows");
    int row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(int space=1;space<=(row-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}