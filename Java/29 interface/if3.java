//this question was given by Ma'am, see notes
//20180403
interface A
{
	void a();
}

interface B extends A
{
	void b();
}

interface C
{
	void c();
}

class D
{
	void d()
	{
		
	}
}
class E extends D implements A,B
{
	public void a()
	{
	System.out.println("void a() from interface A");
	}
	
	public void b()
	{
	System.out.println("void b() from interface B");
	}
	
	public void c()
	{
		System.out.println("interface C");
	}
	
	void d()
	{
		System.out.println("class D");
	}
	
	void e()
	{
		System.out.println("class E");
	}
}

class Main
{
	public static void main(String args[])
	{
		E ob=new E();
		ob.a();
		ob.b();
		ob.c();
		ob.d();
		ob.e();
	}
}