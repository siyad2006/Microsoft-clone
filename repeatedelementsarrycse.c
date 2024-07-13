#include<stdio.h>
int main(void){
    int a[100];
    int i,j,n,c;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
       
    }
     for(i=0;i<n-1;i++){
         c=1;
         for(j=i+1;j<n;j++){
            if(a[i]==0)
            continue;
            if(a[i]==a[j]){// that means a[0]==[1];
                c++;
                a[j]==0;
            }

         }  
         if(c>1)
            printf("\n %d repeated %d times",a[i],c);
         
        }

}