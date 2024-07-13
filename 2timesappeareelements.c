#include<stdio.h>
int main(void){
    int i,j,n,a[100];
    int count,maxcount=0,maxelement;
    printf("enter the size of this array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxelement=a[i];
        }
    }
    if(maxcount>n/2){
        printf("elemnts %d appears more than n/2 times \n",maxelement);
    }else
    {
        printf("no elemnts appear more than n/2 times");
    }

}