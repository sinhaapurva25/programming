package JoinDemo;
//20180427
public class Venue extends Thread
{

	public void run() 
	{
	for(int i=1;i<=10;i++)
	{
		System.out.println("venue"+i);
	}
		
	}
}