package ObjetLevelLockUsingBlock;

public class Display 
{
	public  void wish(String  s)
	{
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		
		synchronized (this)
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
		
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getName());
		
	}
}
