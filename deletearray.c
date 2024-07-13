
#include<stdio.h>
int main(void){
    int i,position,limit;
    int a[30];
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);


    }
printf("enter the position to delete");
scanf("%d",&position);
for(i=position;i<limit;i++)
{
    a[i]==a[i-1];
}
printf("\n convertwd area");
for(i=0;i<limit-1;i++)
{
    printf(" \n %d",a[i]);
}
}
