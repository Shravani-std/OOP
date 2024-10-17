import java.util.Scanner;

class MathOperations{
	public static void main(String[] args){
		Scanner obj = new Scanner(System.in);
		while(true){
			System.out.println("Choose Operation: ");
			System.out.println("1. Arithmetic Operation ");
			System.out.println("2. Statistical Operation: ");
			System.out.println("3. Trignometric Operation: ");
			System.out.println("4. Exit... ");

		System.out.println("Enter choice: ");
		int choice = obj.nextInt();

		switch(choice){

		case 1:
			System.out.println("Enter two numbers: ");
			int num1 = obj.nextInt();
			int num2 = obj.nextInt();

			System.out.println("Addition: " + (num1+num2));
			System.out.println("Subtraction: " + (num1-num2));
			System.out.println("Multiplication: " + (num1*num2));
			System.out.println("Division: " + (num1/num2));
			break;

		case 2:
			System.out.println("Enter a set of numbers: ");
			obj.nextLine();
			String input = obj.nextLine();
			String[] numbers = input.split(" ");
			int sum=0;

			for(String number: numbers){
			sum += Integer.parseInt(number);
			}

			int avg = sum / numbers.length;
			System.out.println("Average: " + avg);
			break;
		case 3:
			System.out.println("Enter degree: ");
			int deg = obj.nextInt();
			 double rad = Math.toRadians(deg);
			System.out.println("sine:  " + Math.sin(deg));
			System.out.println("cosine:  " + Math.cos(deg));
			System.out.println("tangent:  " + Math.tan(deg));
			System.out.println("sine:  " + Math.sin(deg));
			break;

		case 4:
			System.out.println("Exiting the program...");
			obj.close();
			System.exit(0);
			break;
default:
System.out.println("Invalid choice");
		}
		}		

	}
}