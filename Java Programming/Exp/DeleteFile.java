import java.io.*;


class DeleteFile{
	public static void main(String args[]){

		
	File f = new File("D:\\Java Programming\\Shravani.txt");
		if (f.delete()) {
			System.out.println("The deleted file is : "
							+ f.getName());
		}
		else {
			System.out.println("Failed in deleting the file.");
		}
	}
			
}

