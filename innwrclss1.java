class outerclass{
    int x=10;

    class innerclass{
        int y=5;
    }
}
    public class innwrclss1{
    
        public static void main(String[] args) {
            outerclass myouter=new outerclass();
            outerclass.innerclass myinner=myouter.new innerclass();
            System.out.println(myinner.y+myouter.x);
        }
    }

