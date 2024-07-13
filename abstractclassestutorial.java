public class abstractclassestutorial{
    // it is linked with googleabstracttutorial
    public static void main(String[] args){
        
        searchall a=new searchall();
        searchimage i=new searchimage();
        searchvideo v=new searchvideo();
        a.search();
        a.message();
        i.search();
        i.message();
        v.search();
        v.message();
    }
}
/*
 * 
 * abstract class googleabstracttutorail{
    abstract void search();// ith abdtract aayath kond child class creat cheyth edukkanam
    void message(){
        System.out.println("thank you for using google");
    }
}
class searchall extends googleabstracttutorail{
    void search(){
        System.out.println("all search result");
    }
}
class searchimage extends googleabstracttutorail{
    void search(){
        System.out.println("image search result");
    }
}
class searchvideo extends googleabstracttutorail{
    void search(){
        System.out.println("video    search result");
    }
}
 */