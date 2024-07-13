//inter changing last and first element
#include<stdio.h>
int main(void){
    int i,limit,temp;
    int a[35];
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the vlues for this array");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);

    }
    temp=a[0];
    a[limit-1]=a[0];
    a[0]=temp;
    printf("\n converted array");
    for(i=0;i<limit;i++){
        printf(" \n %d",a[i]);
    }

}