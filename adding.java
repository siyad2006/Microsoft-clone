import java.util.Scanner;
public class adding {

    public static void main(String[] args) {
        float a,b,sum;
        System.out.println("enter the numbers");
        Scanner r=new Scanner(System.in);
        a=r.nextFloat();
        b=r.nextFloat();
        sum= a + b;
        System.out.println("addition   "+sum);


    }
}