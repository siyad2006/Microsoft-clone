#include<stdio.h>
int main(void){
    int i,j,row;
    printf("enter the number of rows you needed to excicute: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            if((i+j)<=row)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}