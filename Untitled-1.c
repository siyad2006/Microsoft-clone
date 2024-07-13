 #include <stdio.h>
 
 int sum();
 int main(){
    sum();
    
 }
 int sum(){
int a ,b;
int sum=0;
printf("enter the values for a and b");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum is  %d",sum);

 }