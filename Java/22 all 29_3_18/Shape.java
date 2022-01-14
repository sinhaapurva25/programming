package s;
public class Shape
{
	private int l,b;
	private float pi;
	
	public Shape(int x,int y)
	{
		l=x;
		b=y;
	}

	public Shape(int x,float pi)
	{
		l=x;
		this.pi=pi;
	}
	
	public Shape(int x)
	{
		l=x;
	}


	public int getLen()
	{
		return l;
	}
	
	public int getBre()
	{
		return b;
	}
	
	public float getPi()
	{
		return pi;
	}
	
	public void area()
	{
		System.out.println("overridng");
	}
}