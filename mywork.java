import java.util.Scanner;
public class mywork {

    public static void main(String[] args) {
        System.out.println("enter the numbers");
        int a,b,c,choice,sum;
        Scanner r=new Scanner(System.in);
        a=r.nextInt();
        b=r.nextInt();
        c=r.nextInt();
        System.out.println("enter your choice");
        Scanner s=new Scanner(System.in);
        choice=s.nextInt();
        switch (choice) {
            case 1:
            
              sum= a + b + c;
              System.out.println("sum="+sum);
        
            
                
                break;
                case 2:
                sum= a - b + c;
                System.out.println(+sum);
        
                break;
        
            default: 
            System.out.println("invalid number");
                break;
               
        }
        
    

    }
}