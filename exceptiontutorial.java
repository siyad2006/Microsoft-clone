// ee programm use cheyyunnath programmi oru error vannalum ath mind chiyyathe bakki ullathellam excicute cheyyanan
public class exceptiontutorial {

    public static void main(String[] args) {
        System.out.println("programme started");
        try {
            int result=10/0;// ithil ee programme shari alla ath kond ith catch part le commant excicute chiyyum
            System.out.println(result);
        } catch (Exception ex) {
            // TODO: handle exception
            System.out.println("division by zero is not allowed");// trty wrong aaya it excicute aakum
        }
        System.out.println("programme sucessfully excicuted");
    }
}