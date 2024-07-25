import java.util.Scanner;

class Display {
    Scanner obj = new Scanner(System.in);

    String name;
    int age;
    int salary;
    int id;

    void person() {
        System.out.print("Enter Name: ");
        name = obj.next();

        System.out.print("Enter Age: ");
        age = obj.nextInt();

        System.out.print("Enter Salary: ");
        salary = obj.nextInt();

        System.out.print("Enter ID: ");
        id = obj.nextInt();
    }

    void dis() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
        System.out.println("ID: " + id);
    }
}

class Person_Details {
    public static void main(String[] args) {
        Display d = new Display();
        d.person();
        d.dis();
    }
}
