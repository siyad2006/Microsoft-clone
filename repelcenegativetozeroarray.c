#include<stdio.h>
void replacenegativewithzwro(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        if(a[i]<0){
            a[i]=0;
        }
    }
}
int main(void)
{
    int a[]={-2,4,-22,-8,4};
    int i;
    int size=5;
    replacenegativewithzwro(a,size);
    printf("modified array");
    for(i=0;i<size;i++)
    {
        printf("\t%d",a[i]);
    }
}