enum level{
    LOW,
    MEDIUM,
    HIGH
}
public class enum2{
    public static void main(String[]args){
        level mylevel=level.MEDIUM;
        switch(mylevel){
            case LOW:
            System.out.println("low level");
            break;
            case MEDIUM:
            System.out.println("medium level");
            break;
            case HIGH: 
            System.out.println("high level");
            break;
        }
    }

}