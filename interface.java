interface animal() {
    public void animalsond();
    public void sleep();

}
 class ppig implements animal{
    public void animalsond(){
        System.out.println("the pig says: wee wee");
    }
    public void sleep(){
        System.out.println("zzzzzz....zzzzzzz....zz");

    }
}
 public class interface {
    public static void main(String[]args){
        ppig mypig=new ppig();
        mypig.animalsond();
        mypig.sleep();
    }
}