//anonymous object
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
		new A().set(10);
		new A().show();
	}
}