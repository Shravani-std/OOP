class Demo{
    private String name;
    int prn;

    String getName(){
        return name;
    }
    void setName(String name){
        this.name = name;
    }

}
public class Encapsulation {
    public static void main(String a[]){
        Demo d = new Demo();
        
         d.setName("Shravani");
        System.out.println(d.getName());
    }
}
