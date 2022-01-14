30/3/18
class A
{
	int x;
	static int id;
	A()
	{
		x=id++;
	}
	
	void show()
	{
		System.out.println(id+"  "+x);
	}
}

class T
{
	public static void main(String [] args)
	{
		A ob1=new A();
		A ob2=new A();
		A ob3=new A();
		
		ob1.show();
		ob2.show();
		ob3.show();
	}
}