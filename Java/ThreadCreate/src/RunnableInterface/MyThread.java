package RunnableInterface;
public class MyThread implements Runnable
{
	@Override
	public void run() 
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("child "+i);
		}
		
	}
}