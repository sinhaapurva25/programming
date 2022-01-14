package FileHandling;
//20180425
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class Test1 
{
	public static void main(String[] args) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		FileOutputStream fos=new FileOutputStream("Testfile.txt");
		byte[] x=s.getBytes();
		fos.write(x);
		fos.close();
	}
}