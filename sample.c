#include<stdio.h>
int main(void){
    int i,j;
    
    for(i=60;i<=100;i++)
    {
        for(j=i;j<=60;j+=5){
            printf("%d",j);
        }
        printf("\n");
    }
}