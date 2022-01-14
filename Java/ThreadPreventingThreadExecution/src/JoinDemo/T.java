package JoinDemo;

public class T 
{
	public static void main(String[] args) throws Exception 
	{
		Venue t1= new Venue();
		CardPrint t2= new CardPrint();
		Distribute t3=new Distribute();
		t1.start();
		t1.join();
		t2.start();
		t3.start();
	}
}