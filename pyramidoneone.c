#include<stdio.h>
int main(void){
    int i,j,k,l;
    int row;
    printf("enter the number of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(l=i-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
}