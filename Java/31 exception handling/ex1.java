//Single Try Single Catch
//20180403
class Main
{
	public static void main(String args[])
	{
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		try
		{
			System.out.println(75/0); //no compile time error
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
			//or you can write whatever you want in catch
			//the error will be displayed as message
		}
		
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
		System.out.println("Apurva Siha");
	}
}

/*or do this way 

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
		
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		System.out.println("Kaveri");
		
	}
}
*/