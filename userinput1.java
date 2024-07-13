import java.util.Scanner;
public class userinput1 {
public static void main(String[] args) {
    Scanner myobj=new Scanner(System.in);
    System.out.println("enter your details");
    System.out.println("enter your name");
    String name=myobj.nextLine();
    System.out.println("enter your age");
    int age=myobj.nextInt();
    System.out.println("enter your salary");
    double salary=myobj.nextDouble();
    System.out.println("your details ");
    System.out.println("NAME: "+name);
    System.out.println("AGE :  "+age);
    System.out.println("SALARY: "+salary);
}
    
}