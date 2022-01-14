package ObjetLevelLockUsingMethod;

public class Display 
{
	public synchronized void wish(String  s)
	{
		try
		{
			for(int i=1;i<=10;i++)
			{
				System.out.println("Good Morning "+s);
				Thread.sleep(1000);
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}
