package ObjetLevelLockUsingBlock;

public class Test {

	public static void main(String[] args)
	{
		Display d=new Display();
		
		MyThread t1=new MyThread(d, "Apurva");
		MyThread t2=new MyThread(d, "Kaveri");
		
		t1.start();
		t2.start();
	}

}
