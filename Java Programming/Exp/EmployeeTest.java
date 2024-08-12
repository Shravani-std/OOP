import java.util.Scanner;

class Employee {
    private String firstName_employee;
    private String lastName_employee;
    private double monthly_Salary;

    // Default constructor
    public Employee() {
        this.firstName_employee =firstName_employee;
        this.lastName_employee =lastName_employee;
        this.monthly_Salary = monthly_Salary;
    }

    // Setters
    public void setFirstName_emp(String firstName_employee) {
        this.firstName_employee = firstName_employee;
    }

    public void setLastName_emp(String lastName_employee) {
        this.lastName_employee = lastName_employee;
    }

    public void setSalary_emp(double monthly_Salary) {
        this.monthly_Salary = monthly_Salary;
    }

    // Getters
    public String getFirstName_emp() {
        return firstName_employee;
    }

    public String getLastName_emp() {
        return lastName_employee;
    }

    public double getSalary_emp() {
        return monthly_Salary;
    }
}

class EmployeeTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Employee emp1 = new Employee();

      
        System.out.print("Enter first name: ");
        String first = sc.next();
        emp1.setFirstName_emp(first);

        System.out.print("Enter last name: ");
        String last = sc.next();
        emp1.setLastName_emp(last);

        System.out.print("Enter monthly salary: ");
        double sal = sc.nextDouble();
        emp1.setSalary_emp(sal);

      
        System.out.println("First Name of Employee 1: " + emp1.getFirstName_emp());
        System.out.println("Last Name of Employee 1: " + emp1.getLastName_emp());
        System.out.println("Salary of Employee 1: " + emp1.getSalary_emp());

      
        sc.close();
    }
}
