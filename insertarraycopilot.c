#include<stdio.h>
int main(void){
    int a[100]={10,20,30,40,60,70,80,90,100,110};// initialise array
    int i,insert,n=10;
    
    // display original array
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    printf("\n");

    insert=50;
    int position=5;
    n++;
    for(i=n-1;i>=position;i--)// shift elements to make space for insert value

    a[i]=a[i-1];
    a[position-1]=insert;
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}