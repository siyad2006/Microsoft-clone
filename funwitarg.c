#include<stdio.h>
void sum(int,int);
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
void sum(int num1,int num2){
        int result;
        result=num1+num2;
        printf("result is %d",result);


}
