package garbage;

public class Test 
{

	public static void main(String[] args) 
	{
		//singleton
		Runtime r=Runtime.getRuntime();
		System.out.println(r);
		
		
		 r=Runtime.getRuntime();
		System.out.println(r);
			
			
		/*garbage collection
		 * System.out.println(r.totalMemory());
		System.out.println(r.freeMemory());
		for(int i=1;i<=100000;i++)
		{
			new Test();
		}
		System.out.println(r.totalMemory());
		System.out.println(r.freeMemory());
		System.gc();
		System.out.println(r.totalMemory());
		System.out.println(r.freeMemory());
		*/
	}

}
