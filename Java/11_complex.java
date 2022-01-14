//complex
//27/3/18
class complex
{
	int real;
	int imaginary;
	
	void set(int a,int b)
	{
		real=a;
		imaginary=b;
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