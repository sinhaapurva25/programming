package ClassLevelLockUsingblock;

public class MyThread extends Thread 
{
	Display d;
	String name;
	public  MyThread(Display d, String s) 
	{
		this.d=d;
		this.name=s;
	}
	
	@Override
	public void run() 
	{
		d.wish(name);
	}
}
