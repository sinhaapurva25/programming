//Throw
//20180404 

import java.util.Scanner;
class AgeTest
{
         void age()
		 {
			 System.out.println("Enter your age");
			 Scanner sc= new Scanner(System.in);
			 int age=sc.nextInt();
			 if(age<18)
			 {
				//System.out.println("Not eligible to vote");			
				throw new NullPointerException("Not eligible to vote");
			 }
			 else
			 {
				 System.out.println("Eligible to vote");
			 }
		 }		 
}
class Check
{
	public static void main(String[] args)
	{
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		AgeTest a=new AgeTest();
		
		try
		{
			a.age();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		System.out.println(",,,,,,,");
		
	}
}