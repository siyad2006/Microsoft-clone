#include<stdio.h>
int main(void){
    int i,j;
    int a[100],k,n,temp;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)

    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[i]=temp;
    }
    
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }
}