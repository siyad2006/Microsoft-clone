class adder{
    static int add(int a,int b, int c){
        return a+b+c;
    }
    public double add(double a,double b,double c){
        return a+b+c;
    }
}
/**
 * metodoverloading2
 */
public class metodoverloading2 {

    public static void main(String[] args) {
        adder ad=new adder();
        System.out.println(ad.add(84, 054, 4));
        System.out.println(ad.add(39, 32, 43));
    }
}