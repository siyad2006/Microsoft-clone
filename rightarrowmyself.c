#include<stdio.h>
int main(void){
    int i,j,l,n;

    scanf("%d",&n);
    for(i=-n;i<=n;i++){
        if(i<0)
        l=-i;
        else
        l=i;
        for(j=0;j<n-l;j++){
            if(j>n-l)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}