//22/3/18
/*
//confusion of a, will give an error
class A
{
	int a;
	void show()
	{
		System.out.println(a);
	}
}

class B extends A
{
	int a;
	void set(int x,int y)
	{
		a=x;
		a=y;
	}
	
	void view()
	{
			System.out.println(a);
	}
	
	void multi()
	{
			System.out.println(a*a);
	}
}
class Main
{
	public static void main(String[] args)
	{
		B ob=new B();
		ob.set(10,20);
		ob.show();
		ob.view();
		ob.multi();
	}
}
*/
//super class
class A
{
	int a;
	void show()
	{
		System.out.println(a);
	}
}

class B extends A
{
	int a;
	void set(int x,int y)
	{
		super.a=x;
		a=y;
	}
	
	void view()
	{
			System.out.println(a);
	}
	
	void multi()
	{
			System.out.println(super.a*a);
	}
}
class Main
{
	public static void main(String[] args)
	{
		B ob=new B();
		ob.set(10,20);
		ob.show();
		ob.view();
		ob.multi();
	}
}