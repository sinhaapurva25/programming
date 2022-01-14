package m;
import r.Rect;
import c.Cir;
import sq.Squ;
import s.Shape;

class T
{
	public static void main(String [] args)
	{
		Shape ob=new Rect(10,20);
		ob.area();
		
		ob=new Cir(10,3.14f);
		ob.area();
		
		ob=new Squ(10);
		ob.area();
	}
}