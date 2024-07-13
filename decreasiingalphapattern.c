#include<stdio.h>
int main(void){
    int i,j,row;
    printf("enter the value for row");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=row;j>=1;j--){
            printf("%c",64+j);
        }
        printf("\n");
    }
}