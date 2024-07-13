#include<stdio.h>
#include<limits.h>
int main(void){
    int i,n,a[100];
    int min1,min2,min3;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min1=min2=min3=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>min1){
            min3=min2;
            min2=min1;
            min1=a[i];
        }
        else if(a[i]>min2&&a[i]!=min1){
            min3=min2;
            min2=a[i];
        }else if(a[i]>min3&&a[i]!=min1&&a[i]!=min2){
            min3=a[i];
        }
    }
    printf("thrd largest element :%d",min3);
    return 0;
}