package RunnableInterface;

public class Test 
{

	public static void main(String[] args) 
	{
		MyThread t1=new MyThread();
		Thread ob=new Thread(t1);
		ob.start();
		for(int i=1;i<=10;i++)
		{
			System.out.println("main "+i);
		}

	}

}