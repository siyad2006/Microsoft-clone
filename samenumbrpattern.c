#include<stdio.h>
int main(){
    int i,j;
    int rows;
    printf("enter the value for rows");
    scanf("%d",&rows);

    for (i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}