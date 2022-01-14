package InterThreadCommunication;

public class Test 
{
	public static void main(String[] args) throws Exception
	{
		MyThread ob=new MyThread();
		ob.start();
		synchronized (ob)
		{
			ob.wait();
			System.out.println(ob.x);
		}
	}
}
