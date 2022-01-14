package A;
//20180427
public class A 
{
	public static void main(String[] args) throws Exception 
	{
		System.out.println("Hello");
		Thread.currentThread().join();
	}
}