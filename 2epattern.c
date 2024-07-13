#include<stdio.h>
int main(void){
    int i,j,n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i*2;j++){
            printf("x");
        }
        printf("\n");
        printf("x");
        printf("\n");
    }
}