#include<stdio.h>
int main(void){
    int n,i,j,l;
    printf("enter the value: ");
    scanf("%d",&n);
    for(i=-n;i<=n;i++){
        if(i<0)
        l=-i;
        else
        l=i;
        for(j=0;j<l+1;j++)
        printf("* ");
        printf("\n");
    }
}