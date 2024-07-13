#include<stdio.h>
int main(void){
    printf("enter the value for n");
    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            printf("*");
        }
        printf("\n");
        for(int k=1;k<=i*3;k++){
            printf("*\n");
        }
        
        
        printf("\n");
    }
}