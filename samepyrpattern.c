#include<stdio.h>
int main(){
    int i,j,ro;
    printf("enter the number of rows");
    scanf("%d",&ro);
    for(i=ro;i>=1;i--){
        for(j=ro;j>=i;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}