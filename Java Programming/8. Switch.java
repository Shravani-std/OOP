class Switch{
	public static void main(String args[]){
		int n = 4;
		for(int i = 0 ; i < args.length ; i++){
			//System.out.print(args[i]);
			n = Integer.parseInt(args[i]);
		}
		
		switch(n){
			case 0:
				System.out.print("Sunday");
				break;
			case 1:
				System.out.print("Monday");
				break;
			case 2:
				System.out.print("Tuesday");
				break;
			case 3:
				System.out.print("Wendsday");
				break;
			case 4:
				System.out.print("Thusday");
				break;
			case 5:
				System.out.print("Friday");
				break;
			case 6:
				System.out.print("Saturday");
				break;

		}
}
}