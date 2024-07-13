#include<stdio.h>
int main(void){
    int i,size=5,pos,num;
    int a[]={1,2,3,4,5};
    printf("the elements are \n");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }
    printf("\nentyer the position");
    scanf("%d",&pos);
    printf("enter the number to be inserted");
    scanf("%d",&num);
    size++;
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];

    }
    a[pos+1]=num;
    
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }


}