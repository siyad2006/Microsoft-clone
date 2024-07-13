#include<stdio.h>
int main(void){
    int i,j;
    int n;
    int a[100];
    printf("enter the value for n");
    scanf("%d",&n);
    printf("to enter the values of this array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

     j=0;
    for(i=0;i<n;i++){
        if(a[i]==1||(a[i]%2==0&&a[i]>2))
        
        break;
        a[j++]=a[i];
    }
    printf("modified array");
    for(i=0;i<j;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}