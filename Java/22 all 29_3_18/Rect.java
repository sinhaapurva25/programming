package r;
import s.Shape;
public class Rect extends Shape
{
	public Rect(int a, int b)
	{
		super(a,b);//constructor of super
	}
		
	public void area()
	{
		System.out.println(getLen()*getBre());
	}
}