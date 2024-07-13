abstract class googleabstracttutorail{
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