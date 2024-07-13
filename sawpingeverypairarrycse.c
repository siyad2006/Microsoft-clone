#include<stdio.h>
int main(void){
    int a[100],i,n,temp;
    printf("enter the size of this array");
    scanf("%d",&n);
    printf("enter the elements of this array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)// ith 3 rd possition kk pokan vendi aan ingane ezhutheekneth
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<n;i++){
        printf(" \t %d",a[i]);
    }
}