#include<stdio.h>
int main(void){
    int a[6]={1,3,2,4,32,5};
    int large,i;
    large=a[0];
    for(i=1;i<6;i++){
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("%d",large);
}
