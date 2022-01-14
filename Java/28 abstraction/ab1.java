//20180403
abstract class A
{
	abstract void show();
	
}

class B extends A
{
	void show()
	{
		
	}
	void view()
	{
		
	}
}
class T
{
	public static void main(String[] args)
	{
		A ob=new B();
		
	}
}

/*abstraction constructor
abstract class A
{
	int x;
	A()
	{
		x=0;
	}
}

class B extends A
{
	B()
	{
		x=5;
	}
}

class Main
{
	public static void main(String args[])
	{
		A ob=new B();
	}
}
constructor can't be preceded by a abstract keyword 
because constructor of class A cannot be overridden in other classes or class B
*/