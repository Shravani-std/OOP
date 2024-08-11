
class Student{
    String name;
    int prn;
    
}
class Main_Students{
    public static void main(String a[]){
        Student s1 = new Student();
        s1.name = "Shravani";
        s1.prn = 22125;

        Student s2 = new Student();
        s2.name = "John";
        s2.prn = 21256;

        Student s3 = new Student();
        s3.name = "Mercy";
        s3.prn = 22658;

        Student student[] = new Student[3];
        student[0]= s1;
        student[1]= s2;
        student[2]= s3;

        System.out.println(" PRN     "+ " Name  ");
        for( int i = 0; i<student.length ; i++){
            System.out.println(student[i].prn + " = " + student[i].name);
        }

        System.out.println("Using Enhanced For loop: ");
        for( Student std : student){
            System.out.println(std.name + " : " + std.prn);
        }

    
    }
}