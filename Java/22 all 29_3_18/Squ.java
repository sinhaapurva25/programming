package sq;
import s.Shape;
public class Squ extends Shape
{
	public Squ(int a)
	{
		super(a);//constructor of super
	}
		
	public void area()
	{
		System.out.println(getLen()*getLen());
	}
}