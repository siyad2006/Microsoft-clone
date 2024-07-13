#include<stdio.h>
int main(void){
    int i,n,a[45];
    printf("enter the value for limit");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the reverse array\n");
    for(i=n-1;i>=0;i--){
        printf("\n%d",a[i]);
    }
}