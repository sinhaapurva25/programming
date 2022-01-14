//constructor
//22/3/18
import java.util.Scanner;
class complex
{
	int real;
	int imaginary;
	
	complex(int real,int imaginary) //paracons
	{
		this.real=real; 
		this.imaginary=imaginary;
	}
	complex()                      //decons
	{
				
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
		complex c1=new complex(10,20);
		complex c2=new complex(20,58);
		complex c3=new complex();
	
		c3=c1.add(c2);
		c1.show();
		c2.show();
		c3.show();
		
	}
}
//there is no concept of destructor in Java, memory is freed by jvm on its own