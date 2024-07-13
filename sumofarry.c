#include<stdio.h>
int main(void){
    int arry[25];
    int i,limit,sum=0;
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("enter the elements of array");
    for(i=0;i<limit;i++){
        scanf("%d",&arry[i]);

    }
    for(i=0;i<limit;i++){
        sum=sum+arry[i];
    }
    printf("%d",sum);
}