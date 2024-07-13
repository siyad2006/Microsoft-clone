#include<stdio.h>
int main(void){
    int j,i;
    int n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2*n-i-1;j++){
            if(j<n-i-1)
            printf(" ");
            else
            printf("* ");
        }
        printf("\n");
    }
}    