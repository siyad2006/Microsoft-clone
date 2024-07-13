import java.util.Scanner;
public class IfSample {

    public static void main(String[] args) {
        System.out.println("enter a number");
Scanner s=new Scanner(System.in);
    int a;
    a=s.nextInt();
    int num;
    num=a;
    if (num<0) {
        System.out.println("numert is negative");
    } else {
        System.out.println("number is positive");
    }
    
    }
}