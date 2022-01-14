package SleepDemo;
//20180427
public class Test 
{
	public static void main(String[] args) throws InterruptedException 
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("child thread "+i);
			Thread.sleep(2000);
		}
		
	}

}
