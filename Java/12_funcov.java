//function overloading
//22/3/18
import java.util.Scanner;
class shape
{	
	void area(int a)
	{
		System.out.println(a*a);
	}
	
	void area(int a,int b)
	{
		System.out.println(a*b);
	}
	
	void area(int a, float pi)
	{
		System.out.println(pi*a*a);
	}
}

class Main
{	
	public static void main(String args[])
	{
		shape ob=new shape();
		ob.area(10);
		ob.area(10,20);
		ob.area(10,3.14f);
	}
}