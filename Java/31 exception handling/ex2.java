//Single Try Multiple Catch
//20180403

class Name
{
	public static void main(String[] args)
	{
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		try
		{
			
		System.out.println(10/0);
		}
		catch(ArithmeticException e)
		{
			
		System.out.println("Kaveri Agarwala");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			
		System.out.println("kAVERIIIIII");
		}
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
	}
}