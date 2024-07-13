#include<stdio.h>
int main(void){
    int i,a[25],limit;
    int position,value;
    printf("enter the number of elements in array");
    scanf("%d",&limit);
    printf("enter %d elements",limit);
    for(i=0;i<limit;i++)
    scanf("%d",&a[i]);
    printf("enyter the position where you wish to insert an element");
    scanf("%d",position);
    printf("enter the value to insert\n");
    scanf("%d",&value);
    for(i=limit-1;i>=position-1;i--){
    a[i+1]=a[i];
    }
    a[position-1]=value;
    
    printf("resultant array is \n");

    for(i=0;i<=limit;i++)
    {
            printf("%d",a[i]);
    }
    
    
    
}