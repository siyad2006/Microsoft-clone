public class inheritance1 {

    protected String brand="ford";
    public void honk(){
        System.out.println("tuu,tuu");
    }
}
class car extends inheritance1 {
    private String modelname="mustang";
    public static void main(String[] args) {
        car mycar=new car();
        mycar.honk();
        System.out.println(mycar.brand+"  "+mycar.modelname);

    }
}