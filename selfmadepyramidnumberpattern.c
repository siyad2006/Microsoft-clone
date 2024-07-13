#include<stdio.h>
int main(void){
    int i,j;
    int row;
    printf("enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for( int k=i;k>=1;k--)
        {
            printf("%d",k);

        }
        if(i>=2){

        
        for(int l=2;l<=i;l++)
        {
            printf("%d",l);
        }
        }
        printf("\n");
    }
}