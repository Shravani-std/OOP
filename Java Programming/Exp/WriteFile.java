import java.io.*;
import java.io.IOException;

class WriteFile{
	public static void main(String args[]){

		

		try{
			FileWriter f= new FileWriter("D:\\Java Programming\\Shravani.txt");
			f.write("Hello World!!!");
			f.close();

			System.out.println("Successfull");
		
		}
		catch(IOException e){
			System.out.println(e);
		}
	}
			
}