import java.util.Scanner;

class Person{
	public String name;
	public int birthYear;
	public float height;
	public float weight;
	public String address;
	
	public int calculateAge(){
		int currYear  = 2024;
		return currYear - birthYear;
	}
}
class Student extends Person{
	public int studentRollno;
	public int studentMarks;
	public int calculateAvg(){
		int sum = 
	}
}
class Employee extends Person{
	public int empID;
	public int salary;
	//public int calculateTax(){}
}
class InheritanceTest{
	public static void main(String a[]){

Scanner myObj = new Scanner(System.in);
		Person p = new Person();
		Student st = new Student();
		Employee emp = new Employee();
		
		
    		//System.out.println("Enter username");
    		//p.name = myObj.nextLine();
		//System.out.println("Username is "+ p.name);

	
			System.out.println("Enter Student Name:");
    			st.name = myObj.nextLine();
			
			System.out.println("Enter Student Roll no:");
    			st.studentRollno = myObj.nextInt();

			System.out.println("Enter Student Marks:");
    			st.studentMarks = myObj.nextInt();
			
			System.out.println("Enter Student height:");
    			st.height = myObj.nextFloat();
			
			System.out.println("Enter Student weight:");
    			st.weight = myObj.nextFloat();
			
			System.out.println("Enter Student address:");
    			st.address = myObj.nextLine();
			
	
	
			System.out.println("Student name is "+ st.name);
			//System.out.println("student BirthDate is "+ st.birthDate);
			System.out.println("Height:  "+ st.height);
			System.out.println("weight:  "+ st.weight);
			System.out.println("Student Address: "+ st.address);
			System.out.println("Student Roll no: "+ st.studentRollno);
			System.out.println("Student Marks: "+ st.studentMarks);	


			System.out.println("Enter Student Year of Birth: ");
			st.birthYear = myObj.nextInt();
			int age = st.calculateAge();
			System.out.println("Student Age is: "+ age);
			     myObj.close();
		
	}
}