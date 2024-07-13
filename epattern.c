#include <stdio.h>
int main(void){
    printf("how many row are you needed to exicute");
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i*2;j++){
            printf("* ");

        }
        if(i==row){
            break;
        }
        for(j=1;j<=i*row;j++){
            printf("\n* \n");
        }
        printf("\n");
    }
}