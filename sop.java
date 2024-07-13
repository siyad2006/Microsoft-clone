public class sop extends sup {

    int a;
    void display(){
        System.out.println("its b");
        super.display();

    }
    public static void main(String[] args) {
        sop d=new sop();
        d.display();
    }
}