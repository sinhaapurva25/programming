package YieldDemo;
//20180427
class T 
{
	public static void main(String[] args) 
	{
		MyThread t1=new MyThread();
		t1.start();
		for(int i=1;i<=20;i++)
		{
			System.out.println("Parent thread"+i);
		}
		
	}

}