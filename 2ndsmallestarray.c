#include<stdio.h>
int main(void){
    int a[100],i,n,l1,l2;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l1=__INT_MAX__;
    l2=__INT_MAX__;
    for(i=0;i<n;i++)
    {
        if(a[i]<l1)
        {
            l2=l1;
            l1=a[i];
        }
        else if(a[i]<l2&&a[i]>l1)
        {
            l2=a[i];
        }

    }
    printf("\n first smallest=%d",l1);
    printf("\nsecond smallest=%d",l2);
}