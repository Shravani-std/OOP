import java.util.Scanner;
class Employee{
	private String employee_Name;
	private int employee_Id;
	private double employee_Salary;

	Employee(String employee_Name, int employee_Id, double employee_Salary){
		this.employee_Name = employee_Name;
		this.employee_Id = employee_Id;
		this.employee_Salary = employee_Salary;
	}

	public String getEmployee_Name(){
		return employee_Name;
	}
	public void setEmployee_Name(String employee_Name){
		this.employee_Name = employee_Name;
	}
	

	public int getEmployee_Id(){
		return employee_Id;
	}
	public void setEmployee_Id(int employee_Id){
		this.employee_Id = employee_Id;
	}
	

	public double getEmployee_Salary(){
		return employee_Salary;
	}

	public void setEmployee_Salary(double employee_Salary){
		this.employee_Salary = employee_Salary;
	}
	

	public void raiseInSalary(){
		this.employee_Salary = employee_Salary * 1.10;
	}

	
		public static void main(String args[]){
			
			Scanner obj = new Scanner(System.in);

			System.out.println("Enter Employee Name: ");
			String employee_Name = obj.nextLine();

			System.out.println("Enter Employee ID: ");
			int employee_Id = obj.nextInt();

			System.out.println("Enter Employee Salary: ");
			double employee_Salary = obj.nextDouble();

			Employee emp1 = new Employee(employee_Name,employee_Id,employee_Salary);
			
			System.out.println("Employee Details: ");
			System.out.println("Employee Name   : "+ emp1.getEmployee_Name());
			System.out.println("Employee ID     : "+ emp1.getEmployee_Id());
			System.out.println("Employee Salary : "+ emp1.getEmployee_Salary());


			
			emp1.raiseInSalary();
       			 System.out.println("Updated Salary is: " + emp1.getEmployee_Salary());
			

			obj.close();

		}
}