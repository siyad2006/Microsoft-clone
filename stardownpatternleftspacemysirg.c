#include<stdio.h>
int main(void){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=i)
            printf("*");// star num appurath space ittal star pyramid pattrn kittum
            else
            printf(" ");
        }
        printf("\n");
    }
}