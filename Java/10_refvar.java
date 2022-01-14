//object creation or reference variable creation
//22/3/18
import java.util.Scanner;
class A
{
	int x;
	
	void set(int a)
	{
		x=a;
	}
	void show()
	{
		System.out.println(x);
	}

	public static void main(String args[])
	{
		A t=new A(); //t is reference variable
		t.set(10);
		t.show();
		
		new A().show(); //this is another object
	}
}