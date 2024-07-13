class adder{
    static int add(int a,int b){
        return a+b;
    }
    static int add(int a,int b,int c){
        return a+b+c;
    }
}
     class mthodoverloading1 {
    
        public static void main(String[] args) {
            adder ad=new adder();
            System.out.println(ad.add(20, 40));
            System.out.println(ad.add(80, 43, 53));
        }
    }
