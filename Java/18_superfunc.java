//super class in functions
//22/3/18
class A
{
	int a;
	void show()
	{
		System.out.println(a);
	}
	void view()
	{
		System.out.println("kkkkk");
	}
}

class B extends A
{
	int a;
	void set(int x,int y)
	{
		
		a=y;
		super.a=x;
	}
	
	void view()
	{
		
		System.out.println(a);
		super.view();

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