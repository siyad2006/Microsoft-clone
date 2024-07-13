#include<stdio.h>
int main(){
    int i,j,rows;
    printf("how many rows you needed to exicute");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=rows;j>=1;j--){
            printf("%d",j);

        }
        printf("\n");
    }
}