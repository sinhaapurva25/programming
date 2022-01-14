package ExtendingThreadClass;
//20180425
//getName(), setName() and getId()
public class gsg
{
	public static void main(String[] args)
	{
		Thread.currentThread().setName("apurva");
		System.out.println(Thread.currentThread().getId());
		System.out.println(10/0);
	}
}