//this
//22/3/18
import java.util.Scanner;
class complex
{
	int real;
	int imaginary;
	
	void set(int real,int imaginary)//if these are the same names as the member variables, we use this keyword
	{
		this.real=real; //this is a keyword, in C++ it is a pointer
		this.imaginary=imaginary;

	}
	
	void show()
	{
		System.out.println(real+"+"+imaginary+"j");
	}
	
	complex add(complex c)
	{
		complex r=new complex();
		r.real=real+c.real;
		r.imaginary=imaginary+c.imaginary;
		return r;
	}
}

class Main
{	
	public static void main(String args[])
	{
		complex c1=new complex();
		complex c2=new complex();
		complex c3=new complex();
	
		c1.set(10,20);
		c2.set(20,58);
		
		c3=c1.add(c2);
		c1.show();
		c2.show();
		c3.show();
		
	}
}