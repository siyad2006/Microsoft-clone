#include <stdio.h>
int main(){
    int limit,value [100];
    int i;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values ");
    for ( i = 0; i < limit; i++)
    {
        /* code */
scanf("%d",&value[i]);

    }
 for ( i = 0; i < limit-1; i++)
 {
    /* code */
for ( int j=i+1; i < limit; j++)
{
    /* code */
if (value[i]>value[j])
{
    /* code */
int temp=value[i];
value[i]=value[j];
value[j]=temp;

}


}


 }
 printf("soarted values");
 for (size_t i = 0; i < limit; i++)
 {
    /* code */
printf("%d",value[i]);

 }
 
    
}