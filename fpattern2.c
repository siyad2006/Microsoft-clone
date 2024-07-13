#include<stdio.h>
int main(void){
    int i,j,n;
   int m;
    printf("enter the value for n");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++){
        

        
        for(j=1;j<=i+1;j++){
            printf("*");
        }
       for(int k=1;k<=(i+4)-1;k++){
        printf("\n*");
       }
       

        printf("\n");
        
        
    }
    
}