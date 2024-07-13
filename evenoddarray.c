#include<stdio.h>
int main(void){
    int i,j=0,k=0,n;
    int a[25], b[25],c[20];
    printf("how many rows you needed to excicute");
    scanf("%d",&n);
    printf("enter %d number",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
            printf("even array");
        for(i=0;i<j;i++)
        printf("%d",b[i]);
        printf("\n odd array");
        for(i=0;i<k;i++)
        printf("%d",c[i]);
    
        
}