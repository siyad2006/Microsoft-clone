#include<stdio.h>
int main(){
    int i;
    int array[100];
    int sum=0;
    int n;
    printf("enter the limit");
scanf("%d",&n);
printf("enter the values");

for ( i = 0; i < n; i++)
{
    /* code */
    scanf("%d",&array[i]);

}
for ( i = 0; i < n; i++)
{
    /* code */
    sum=sum+array[i];
}

printf("  sum=  %d",sum);

}