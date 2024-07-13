public class polymorphism1 {

    public void animalsund(){
        System.out.println("the animal makes sonds");
    }
}
class pig extends polymorphism1{
    public void animalsund(){
        System.out.println("the pig makes sond like : wee wee");

    }
}
class dog extends polymorphism1{
    public void animalsund(){
            System.out.println("the animal dog makes sounds like : bow bow bow");

    }
}
class main{
    public static void main(String[]args){
        polymorphism1 myanimal=new polymorphism1();
        polymorphism1 mypig=new pig();
        polymorphism1 mydog=new dog();
        myanimal.animalsund();
        mypig.animalsund();
        mydog.animalsund();


    }
}