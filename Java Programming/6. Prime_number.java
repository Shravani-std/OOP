class Prime_number{
	public static void main(String args[])
	{
		int arr[] = {1,2,4,6,7,8,11,6,13};
			for(int i=0;i<9-1;i++){
				for(int j = 0;j<i;j++){
					if( arr[i] % j == 0){
						System.out.println("Not Prime");
					}else{
						System.out.println("Prime");
					}
				}
			}	
	}	

}