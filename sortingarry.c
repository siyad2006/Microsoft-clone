#include<stdio.h>
int main(void){
    int a[]={5,4,3,2,1};
    int i,j,n=5,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){// ivivde a[i]>a[j] aayath kond 12345 ezhuthiyitt karyam illa 54321 enn input kodukkanam
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){

    

    printf("\n%d",a[i]);
    }
    }