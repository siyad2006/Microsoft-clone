public class mainencapsulationtutorial{
    public static void main(String[] args){
        employeeencapsulationtutorial e=new employeeencapsulationtutorial();// encapsulation aayath kond employee il name,salary private aayi store cheyya

        // ath kittanamenkil getter(read-only),setter(write only) use chiyyanam
        /*ee code employee encapsulation tutorial um aayit linked aan */

        e.setname("john");
        e.setsalary(1000);
        System.out.println("name "+e.getname());
        System.out.println("salary "+e.getsalary());
    }
}
/* employee encapsulation tutorial
 * 
 * public class employeeencapsulationtutorial{
    private String name;
   private int salary;
   // getter and setter method
   public String getname(){
    return name;
   }
   public void setname(String name){
    this.name=name;

   }
   public int getsalary(){
    return salary;
   }
   public void setsalary(int salary){
    this.salary=salary;
   }
}
 */