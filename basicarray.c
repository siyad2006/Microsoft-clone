#include<stdio.h>
int main(void){
    int a[10];
    int i,limit;
    printf("enter the limit of yhis array");
    scanf("%d",&limit);
    printf("enter the values for array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n given array is:  \n");
    for(i=0;i<limit;i++){
        printf(" %d \n",a[i]);
    }
}