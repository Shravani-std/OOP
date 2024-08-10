public class StringBf {
    public static void main(String s[]){
        
        StringBuffer sb = new StringBuffer("Shravani");
       // System.out.println(sb);
       // System.out.println(sb.capacity());

        sb.append( " Tingare");
        sb.setLength(30);
        sb.insert(2, s);
        System.out.println(sb);
        System.out.println(sb.capacity());
    }
}
