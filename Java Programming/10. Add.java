import java.util.Scanner;
class Add{
	public static void main(String s[])
	{
		int num1,num2,sum;
		Scanner sc = new Scanner (System.in);

		System.out.print("Enter num1,num2");

		num1 = sc.nextInt();
		num2 = sc.nextInt();
		sum = num1 + num2;
		System.out.print(sum);
}
}