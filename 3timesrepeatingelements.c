#include<stdio.h>
int main(void){
    int i,j,n,k=0;
    int a[100];
    int flag=0;
    int temp=0;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the elemenus");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n-1;j++){
            if(a[i]!=a[j]){
                continue;
               }
               else{
                temp=a[i];
                flag++;
                
               }
               if(flag==3){
                    break;
                }

            }
            
        }
        if (flag==3)
    {
        /* code */
         printf("%d is repeated 3 times",temp);
    }
    
    }
    
    
       
    
    
