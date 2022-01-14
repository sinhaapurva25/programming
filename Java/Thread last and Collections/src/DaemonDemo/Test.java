package DaemonDemo;

public class Test 
{
	public static void main(String[] args) 
	{
		//Thread.currentThread().setDaemon(true);
		//main ke daemon rakhle execution ta ki kore hobe???
		//static rakhte ei hobe naale 'main not found' chole ashbe
		MyThread ob=new MyThread();
		ob.setDaemon(true);
		ob.start();
		System.out.println(ob.isDaemon());
		System.out.println(Thread.currentThread().isDaemon());
	}
}