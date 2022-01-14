package InterThreadCommunication;

public class MyThread extends Thread 
{
	int x=0;
	@Override
	public void run() 
	{
		synchronized (this)
		{
			for(int i=1;i<=10;i++)
			{
				x=x+i;
			}
			this.notify();
		}
	}
}
