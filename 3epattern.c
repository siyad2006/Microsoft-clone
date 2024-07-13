#include<stdio.h>
int main(void){
    int i,j,n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i*2;j++){
            printf("*");
        }
        
        printf("\n");
        for(int k=1;k<=i;k++){
            printf("*\n");
        }
        
    }
}