#include<stdio.h>
int main(void){
    int i,j;
    int k=50;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k-=5;
        }
        printf("\n");
    }
}