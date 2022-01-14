///////////////////////////////////////////////////// file hadling(Append file)////////////////////////////////////////////////////



package fh;

import java.io.FileOutputStream;
import java.util.Scanner;

public class Write 
{
	public static void main(String[] args) throws Exception 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter message");
		String s=sc.nextLine();
		FileOutputStream fos=new FileOutputStream("stu.txt",true);
		fos.write(s.getBytes());
		fos.close();
	}
}