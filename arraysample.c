#include<stdio.h>
int main(void){
    int a[5];
    a[1]=43;
    a[0]=-10;
    a[2]=3;
    a[3/2]=4;
    a[3]=54;
    printf("%d%d%d%d",a[1],a[0],a[2],a[3/2],a[3]);
}