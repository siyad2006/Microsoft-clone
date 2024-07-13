#include<stdio.h>
int main(void){
    int i,n,position;
    int a[30];
    printf("enterv the value for row");
    scanf("%d",&n);
    printf("print %d elements",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position where you wish to delete");
    scanf("%d",&position);
    if(position>=n+1)
    printf("deletion not posssible");
    else{
        for(i=position-1;i<n-1;i++)
        a[i]=a[i+1];

        printf("resultant array\n");
        for(i=0;i<n-1;i++)
        printf("%d\n",a[i]);

    }
}