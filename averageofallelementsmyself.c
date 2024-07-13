#include<stdio.h>
int main(void){
    int i,n,a[100];
    float sum=0.0,avg;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum += a[i];

    }
    avg=sum/n;
    printf("average = %f",avg);
}