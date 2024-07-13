abstract class animal{
    public abstract void animalsound();
    public void sleep(){
        System.out.println("zzz");
    }
}
class pi extends animal{
    public void animalsound(){
        System.out.println("the pig says :wee wee");
    }
}
class abstraction{
    public static void main(String[]args){
        pi mypig=new pi();
        mypig.animalsound();
        mypig.sleep();

    }
}