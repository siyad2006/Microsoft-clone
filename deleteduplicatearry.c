#include<stdio.h>
int main(void){
    int i,j;
    int n,k;
    int a[100];
    printf("enter the size of this array");
    scanf("%d",&n);
    printf("enter the elements of this array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){// ivide n-1 aavashyam illa karanam n-- thaye diclare cheythittund
            if(a[i]==a[j]){

                    for(k=j;k<n;k++){ 
                    a[k]=a[k+1];
                    }

                    n--;
                    j--;

            }


        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}