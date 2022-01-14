package Singleton;

public class Demo
{
	private static Demo d;

	public static Demo getDemo() 
	{
		if(d==null)
			d=new Demo();
		return d;
	}	
	
}
