#include<stdio.h>
int main(void){
    int i,j;
    int n;
    printf("enter the value for row");
    scanf("%d",&n);
    int k=0;
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i*3;j++){
            printf("* ");
        }
        printf("\n");
    }
    

}