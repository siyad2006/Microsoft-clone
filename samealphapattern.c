#include<stdio.h>
int main(){
    int i,j,rows;
    printf("how many roes do you need");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
}