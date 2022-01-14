//Interface
//20180403

/*class A
{
	void m()
	{
		
	}
}

class B
{
	void m()
	{
		
	}
}

class T extends A, extends B
//class T extends A, B
{
	void m()
	{
	System.out.println(5);
	}
}
*/

//write it in this way
interface A
{
	void m();
}

interface B
{
	void m();
}

class T implements A,B
{
	public void m()
	{
	System.out.println(5);
	}
}