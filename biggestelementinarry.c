#include<stdio.h>
int main(){
    int array[10];
    int i,limit,big;
    printf("enter the limit of this array");
    scanf("%d",&limit);
    printf("enter the elements of this array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    big=array[0];
    printf("the given array  \n ");
    for(i=0;i<limit;i++)
    {
        printf("%d  \n",array[i]);
        if(array[i]>big)
        {
            big=array[i];
     
        }


    }
    printf("the big element is  %d ",big);
}