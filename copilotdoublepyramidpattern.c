#include<stdio.h>
int main(void)
{
    int i,j;
    int lines;
    printf("enter the number of rows");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=(lines*2-(i*2-1));j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    for(i=lines-1;i>=1;i--){
        for(j=1;j<=(lines*2-(i*2-1));j++){
            printf(" %d",j);
        }
        printf("\n");

    }
}