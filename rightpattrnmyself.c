#include<stdio.h>
int main(void){
    int i,j;
    int row;
    printf("enter the size");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if((i+j)<=row)
            printf(" ");
            else
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=(row-1);i++){
        for(j=0;j<=(row-1);j++){
            if(j>=i)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
}