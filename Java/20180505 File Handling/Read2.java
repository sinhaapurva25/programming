////////////////// Read From File///////////////////////



package fh;

import java.io.FileInputStream;

public class Read 
{
	public static void main(String[] args)  throws Exception
	{
		FileInputStream fis=new FileInputStream("stu.txt");
		int x;
		while((x=fis.read())!=-1)
		System.out.print((char)x);
		
		fis.close();
	}
}