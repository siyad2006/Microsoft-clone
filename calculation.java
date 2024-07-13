public class calculation {
//method overloading
    public void sum(int a,int b){
        System.out.println(a+b);

    }

    public void sum(int x,int y,int z ){
        System.out.println(x+y+z);


    }
    public void sum(double d,double c){
        System.out.println(d+c);

    }
public static void main(String[] args) {
    calculation c=new calculation();
    c.sum(13, 8);
    c.sum(55, 88, 98);
    c.sum(33.33, 45.5);
}



}