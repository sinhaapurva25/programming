package ExtendingThreadClass;
//20180425
//run (), start()

public class FiveTable extends Thread
{
	public void run()   
	{
   for(int i=1;i<=10;i++)
  	 System.out.println(5+"x"+i+"="+(i*5));
   
   
   //System.out.println(Thread.currentThread().getId()+Thread.currentThread().getName());
	}
	
}