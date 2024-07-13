#include<stdio.h>
int main(void){
    int a[]={4,34,21,6}
    int large,i;
    large=a[0];
    for(i=0;i<4;i++){
        if(a[i]>large){
            large=a[i];

        }

    }
    printf("%d",large);
}