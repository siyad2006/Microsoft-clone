#include<stdio.h>
void convert(int);
int main(void){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    convert(n);
}
void convert(int n){
    int a[50];
    int i,r;
    for(i=0;n!=0;i++)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}