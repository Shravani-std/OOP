import java.util.Scanner;
class Matrix{
	
	
	int A[][] = new int[3][3];
	int B[][] = new int[3][3];
	Scanner sc = new Scanner (System.in);
	void matrix1(){
		

		System.out.println("Enter First Matrix: ");

		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				A[i][j] = sc.nextInt();
			}	
		}
	}
	void matrix3(){
		System.out.println("Enter Second Matrix: ");

		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				B[i][j] = sc.nextInt();
			}	
		}
	}
	void display(){
		System.out.println("First Matrix: ");

		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				System.out.print(A[i][j]+" ");
				
			}	
			System.out.println();
		}
		System.out.println("Second Matrix: ");

		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				System.out.print(B[i][j]+" ");
				
			}
			System.out.println();	
		}
	}

	void addition(){
		System.out.println("Addition");
		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				int C = A[i][j] + B[i][j];
				System.out.print(C+" ");
				
			}
			System.out.println();	
		}
	}
	void subtraction(){
		System.out.println("Subtraction");
		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				int D = A[i][j] - B[i][j];
				System.out.print(D+" ");
				
			}
			System.out.println();	
		}
	}
	void multiplication(){
		System.out.println("Multiplication");
		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				int E = A[i][j] * B[i][j];
				System.out.print(E+" ");
				

	
			}
			System.out.println();	
		}
	}
	void division(){
		System.out.println("Division");
		for(int i = 0 ; i<3 ; i++){
			for(int j = 0 ; j<3 ; j++){
				int F = A[i][j] / B[i][j];
				System.out.print(F+" ");
				
			}	
			System.out.println();
		}
	}	
}
class Matrix_Main{
	public static void main(String []args)
	{
		Matrix M = new Matrix();
			M.matrix1();
			M.matrix3();
			M.display();
			M.addition();
			M.subtraction();
			M.multiplication();
			M.division();
	}
}
