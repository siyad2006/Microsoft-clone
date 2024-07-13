#include<stdio.h>
int main(void){
    int i,j;
    int rows=5;
    for(i=0;i<rows;i++){
        for(j=0;j<rows-i;j++){
            printf("*");
        }
        printf("\n");
    }
}