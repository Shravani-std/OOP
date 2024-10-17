import java.util.Scanner;
class Exception{
	public static void main(String a[]){
		Scanner sc = new Scanner(System.in);
		
		int nums[] = new int[5];
		int ans[] = new int[5];
		for( int i = 0; i < 5; i++){
			System.out.println("Enter Dividents: ");
			//int nums[] = new int[i];
                        nums[i] = sc.nextInt(); 
		}
			System.out.println("Enter Divisor: ");
			int div = sc.nextInt();
for( int i = 0; i< 5;i++){
	if ( div > 0){
		ans[i] = nums[i]/div;
	}
	System.out.println("Answer of "+ nums[i] + " is "+ ans[i]);
try{
	ans[i] = nums[i]/0;
}
catch(Exception e){
System.out.println("Error has occured");
}

}
	System.out.println("Program has ended");		
		
	}
}