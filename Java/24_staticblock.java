//30/3/18
class college
{
	static int nos;
	void incr()
	{
		nos++;
	}

	void disp()
	{
		System.out.println(nos);
	}
}

class A
{
	public static void main(String args[])
	{
		college d1=new college();
		college d2=new college();
		college d3=new college();
		
		d1.incr();
		d1.incr();
		d1.incr();
		d2.incr();
		d3.incr();
		d3.disp();
	}
}