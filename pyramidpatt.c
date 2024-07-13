#include<stdio.h>
int main(void){
    int i,j,s;
    int n;
    printf("enter the spACE FOR n");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
}