public interface abstractwatsuptutorial {// interface aayath kond ingane ezhuthanam
    void calls();
    
    void mute();
    void disconnect();
    
}
class audiocall implements abstractwatsuptutorial{// ivide inter face aayath kond implements kodukkanam
    public void calls(){
        System.out.println("warsup audio calls");
    }
    public void mute(){
        System.out.println("audio calls muted");
    }
    public void disconnect(){
        System.out.println("audio call disconnected");
    }
    
}
class vidiocall implements abstractwatsuptutorial{
    public void calls(){
        System.out.println("wwarsup vidio calls");
    }
    public void mute(){
        System.out.println("video calls muted");
    }
    public void disconnect(){
        System.out.println("video call disconnected");
    }
}

