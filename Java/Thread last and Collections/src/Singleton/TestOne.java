package Singleton;

public class TestOne 
{
	public static void main(String[] args) 
	{
		//singleton
		/*Runtime r=Runtime.getRuntime();
		System.out.println(r);
		
		
		 r=Runtime.getRuntime();
		System.out.println(r);*/
		
		Demo d=Demo.getDemo();
		System.out.println(d);
		
		d=Demo.getDemo();
		System.out.println(d);
		
			
	}
}
