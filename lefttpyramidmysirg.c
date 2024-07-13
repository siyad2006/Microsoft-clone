#include<stdio.h>
int main(void){
    int i,j,k=0;
    int row;
    printf("enter the rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        i<=(row+i)/2? k++:k--;
        for(j=1;j<=(row+i)/2;j++)
        {
            if(i<=k)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
}