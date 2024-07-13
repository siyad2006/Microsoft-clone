#include<stdio.h>
int main(void){
    printf("enter the value for n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i*3-1;j++){
            printf("*");
        }
        printf("\n");
        for(int k=1;k<=i;k++){
            for(int p=1;p<=i;p++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}