#include<stdio.h>
int main(void){
    int a[25];
    int i,limit,delete;
    printf("enter the limit of array");
    scanf("%d",&limit);
    printf("enter the elements of the array");
    for(i=0;i<limit;i++)
        scanf("%d",&a[i]);
    
    printf("enter the element to delete");
    scanf("%d",&delete);
    for(i=0;i<limit;i++)
        if(a[i]==delete){
            break;
        }
        for(;i<limit-1;i++){
            a[i]=a[i+1];
        }
        for(i=0;i<limit-1;i++)
            printf("%d\n",a[i]);
        
    }

