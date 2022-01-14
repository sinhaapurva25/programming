package B;
//20180427
public class T 
{
	public static void main(String[] args) throws Exception
	{
		MyThread.tm=Thread.currentThread();
		MyThread t1=new MyThread();
		t1.start();
		t1.join();
		for(int i=1;i<=20;i++)
		{
			System.out.println("parent thraed "+i);
			
		}
		
	}

}