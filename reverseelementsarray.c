#include<stdio.h>
int main(void){
    int a[100],i,j,n,temp;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elemenets");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("after reversing \n");
    for(i=0,j=n-1;i=n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("\n a[%d]=%d",i,a[i]);
    }
}