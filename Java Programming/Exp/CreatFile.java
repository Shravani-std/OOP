import java.io.*;
import java.io.IOException;

class CreatFile{
	public static void main(String args[]){

		File f= new File("D:\\Java Programming\\Shravani.txt");

		try{
			if(f.createNewFile()){
				System.out.println("File is Successfully created...");
			}
			else{
				System.out.println("File is Already Existed...");
			}
		}
		catch(IOException e){
			System.out.println(e);
		}
	}
			
}