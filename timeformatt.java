import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
public class timeformatt {

    public static void main(String[] args) {
        LocalDateTime myobj=LocalDateTime.now();
        System.out.println("before formatting: "+myobj);
        DateTimeFormatter myformat=DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
        String formatteddate=myobj.format(myformat);
        System.out.println("after formatting"+formatteddate);
    }
}
