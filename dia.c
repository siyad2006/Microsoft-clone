#include<stdio.h>
int main(void){
    int i,j;
    int n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=i){
                printf("%d ",j);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)<=n){
                printf(" ");
            }
            else
            
            {
                /* code */printf("%d ",j);
            }
            
        }
        printf("\n");
    }
}