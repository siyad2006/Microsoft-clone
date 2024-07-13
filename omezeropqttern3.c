#include<stdio.h>
int main(void){
    int i,j,number=1;
    int row;
    printf("enter the value for row: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",(number++)%2);
            
        }
            printf("\n");

    }
}