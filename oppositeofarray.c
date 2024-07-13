#include<stdio.h>
int main(void){
    int i,limit;
    int a[100];
    printf("how many elements you need to enter?: ");
    scanf("%d",&limit);
    printf("enter the elements of your array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);

    }
        printf("the elements are");
            for(i=0;i<limit;i++)
            {
                printf(" \n%d",a[i]);
            }
            printf("\n the revers of this ARRAY is");
            for(i=limit-1;i>=0;i--)
            {
                printf("\n %d",a[i]);
            }
}