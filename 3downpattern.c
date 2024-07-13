#include<stdio.h>
int main(void){
    int i,j;
    int n;
    printf("enter the value for row");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i*3;j++){
            printf("* ");
        }
        printf("\n");
    }
}