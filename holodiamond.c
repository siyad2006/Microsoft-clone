#include<stdio.h>
int main(void){
    int i,j,r;
   
    printf("enter the value for n");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        for(j=1;j<=r;j++){
            if(j+i==r/2||i+j==r-1+(r/2)||j==i+(r/2)||j+(r/2)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}