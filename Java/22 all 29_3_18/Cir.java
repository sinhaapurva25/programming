package c;
import s.Shape;
public class Cir extends Shape
{
	public Cir(int a,float p)
	{
		super(a,p);//constructor of super
	}
		
	public void area()
	{
		System.out.println(getPi()*getLen()*getLen());
	}
}