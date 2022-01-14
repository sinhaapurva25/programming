//15_consov
//22/3/18
import java.util.Scanner;
class complex
{
	complex()
	{
		System.out.println("0");
	}
	
	complex(int a)
	{
		System.out.println("1");
	}
	
	complex(int a,int b)
	{
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
		complex c1=new complex(1);
		complex c2=new complex(1,2);
		complex c3=new complex(1,2,3);
	}
}
