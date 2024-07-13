#include<stdio.h>
int main(void){
    int i,j,row;
    printf("how hamy rows are you needed to excicute");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=1*row;j++){

            printf("* ");

        }
        for(j=1;j<=i;j++){
            printf("\n* ");
        }
        printf("\n");
    }
}