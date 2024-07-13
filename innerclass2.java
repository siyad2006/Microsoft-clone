class outerclass{
    int x=10;

    static class innerclass {
        int y=5;

    }

}
public class innerclass2{
    public static void main (String[]args){
        outerclass.innerclass myinner=new outerclass.innerclass();
        System.out.println(myinner.y);
        }
}