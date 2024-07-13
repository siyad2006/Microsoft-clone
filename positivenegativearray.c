#include<stdio.h>
int main(void){
    int i,j=0,k=0,n;
    int a[25],b[22],c[20];
    printf("enter the value for n ");
    scanf("%d",&n);
    printf("enter  the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;

        }
    }
    printf("positive number array");
    for(i=0;i<j;i++)
    printf("%d\t",b[i]);
    printf("\n negative number array");
    for(i=0;i<k;i++)
    printf("%d\t",c[i]);

    

}