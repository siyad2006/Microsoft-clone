#include<stdio.h>
int main(void){
    int i,temp,n;
    int a[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=&(a+i);
    &(a+i)=&(a+4);
    &(a+4)=temp;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}// it is not completed 