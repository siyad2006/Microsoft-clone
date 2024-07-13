public class person{
    String name;
    int phone;

    
    
}
class teachers extends person{
    public void showaddress(){
        System.out.println("name  "+name);
        System.out.println("phone  "+phone);
    }
}
class students extends person{

    public void showaddress() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'showaddress'");
    }

}
class stafs extends person{

    public void showaddress() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'showaddress'");
    }

}