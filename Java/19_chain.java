//chain java
//22/3/18
class A
{
	A()
	{
		System.out.println("zero in a");
	}
	
	A(int h)
	{
		System.out.println("one in a");
	}
}

class B extends A
{
	B()
	{
		System.out.println("zero in b");
	}
	
	B(int h)
	{
		super(h); //this comes from B(int h), just like B(5), it's super(h), meaning h is passed in super class
		System.out.println("one in b");
	}
}


class Main
{
	public static void main(String[] args)
	{
		B ob0=new B();
		B ob1=new B(5);
	}
}