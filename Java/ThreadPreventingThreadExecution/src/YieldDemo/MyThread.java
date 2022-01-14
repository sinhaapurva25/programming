package YieldDemo;
//20180427
public class MyThread extends Thread 
{
	public void run() 
		{
		for(int i=1;i<=20;i++)
		{
			System.out.println("child thread"+i);
		}
		}
}
