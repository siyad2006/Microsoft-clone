#include<stdio.h>
void sum();
int main(){
sum();
}
void sum(){
int num1,num2,sum;
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
sum=num1+num2;
printf("result is %d",sum);

}