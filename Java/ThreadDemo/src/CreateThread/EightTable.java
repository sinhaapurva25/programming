package CreateThread;
//20180425
public class EightTable
{
	public static void main(String[] args) 
	{
		FiveTable ob=new FiveTable();
		ob.start();
		
		for(int i=1;i<=10;i++)
			 System.out.println(8+"x"+i+"="+(i*8));
		
		
		//System.out.println(Thread.currentThread().getId()+Thread.currentThread().getName());
	}
}