import java.util.Scanner;

public class mypro {

    public static void main(String[] args) {
        System.err.println("enter the number you needed");
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        switch (n) {
            case 1:
            System.err.println("onuulla");

                
                break;

                
                default:
                System.err.println("default");
                break;
        }
    }
}