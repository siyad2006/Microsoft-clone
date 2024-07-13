public class methodoverreading1 {

    public static void main(String[] args) {
        A ba=new A();//dyndmic binding
        ba.show();
        
    }
}
class A {
    void show(){
        System.out.println("this is class a");
    }
}
class B extends A{
     void show(){
        System.out.println("this is in class b");
    }
}
// we cant over ride static methods
//eg:- static void show();
//it override cheyyan pattilla
//private methode ne overide chiyyan pattilla