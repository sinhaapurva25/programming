package B;
//20180427
class MyThread extends Thread
{
	static Thread tm;
	public void run() 
	{
		try
		{
			for(int i=1;i<=20;i++)
			{
				System.out.println("child thraed "+i);
				tm.join();
			}
		}
		catch(Exception r)
		{
			System.out.println(r);
		}
	}
}