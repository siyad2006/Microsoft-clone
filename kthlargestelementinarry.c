#include<stdio.h>
int main(void){
    int i,j,n,a[100];
    int temp,k;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the elemnts of this array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the value for k: ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("kth larhest element : %d\n",a[k-1]);
}