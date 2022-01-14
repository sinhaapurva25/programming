//consov_this
//22/3/18
import java.util.Scanner;
class complex
{
	complex()
	{
		this(10,20);
		System.out.println("0");
	}
	/*
	complex()
	{
		System.out.println("0");
		this(10,20); //call to this must be first statement in constructor
	}
	*/
	
	complex(int a)
	{
	
		System.out.println("1");
	}
	
	complex(int a,int b)
	{
		this(a);

		System.out.println("2");
	}

	complex(int a,int b,int c)
	{
		System.out.println("3");
	}
	
}

class Main
{
	public static void main(String args[])
	{
		complex c0=new complex();
	
	}
}