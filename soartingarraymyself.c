#include<stdio.h>
int main(void){
    int a[]={1,0,2,6,5};//ith ascenting order aaki mattum
    int i,j,n=5,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){// ivivde a[i]>a[j] aayath kond 12345 ezhuthiyitt karyam illa 54321 enn input kodukkanam
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}