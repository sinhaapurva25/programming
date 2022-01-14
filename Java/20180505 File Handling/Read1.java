//////////////////////////////Read From File (1 ta value )///////////////////////////////////////



package fh;

import java.io.FileInputStream;

public class Read 
{
	public static void main(String[] args)  throws Exception
	{
		FileInputStream fis=new FileInputStream("stu.txt");
		System.out.println((char)fis.read());
		
		fis.close();
	}
}