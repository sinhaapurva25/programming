package FileHandling;
//20180425
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class Test2 
{
	public static void main(String[] args) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		FileOutputStream fos=new FileOutputStream("Testfile.txt",true);
		byte[] x=s.getBytes();
		fos.write(x);
		fos.close();
		
		int i;
		FileInputStream fis=new FileInputStream("Testfile.txt");
		while((i=fis.read())!=-1)
		{
			System.out.print((char)i);
		}
		//System.out.println((char)fis.read());
		fis.close();
	}
}
