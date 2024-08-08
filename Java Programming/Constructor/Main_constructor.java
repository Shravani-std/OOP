import java.util.Scanner;
class Constructor{

	String name,college;
	int grade,id;

       Constructor(){
		
		grade = grade;
		id = id;
		name = name;
		college = college;
	}
	Scanner obj = new Scanner(System.in);

	void getDetails(){
		System.out.print("Enter Your Name: ");
		this.name = obj.next();
		System.out.print("Enter Your College Name: ");
		this.college = obj.next();
		System.out.print("Enter Your id: ");
		this.id = obj.nextInt();
		System.out.print("Enter Your grade: ");
		this.grade= obj.nextInt();
	}
	void displayDetails(){
		System.out.println("Name: " + this.name);
		System.out.println("College: "+ this.college);
		System.out.println("ID: " + this.id);
		System.out.println("Grades: " + this.grade);
	}
}
class Main_constructor{
	public static void main(String[] args){
	Constructor c1 = new Constructor();
	c1.getDetails();
	c1.displayDetails();
}
}