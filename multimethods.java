public class multimethods {

    static void staticmethod(){
        System.out.println("we can easily print the static method without using object");
    }
    public void publicmethod(){
        System.out.println("we can easily print the public method with using the object");
    }
    public static void main(String[] args) {
        staticmethod();
        multimethods met=new multimethods();
        met.publicmethod();

    }
}