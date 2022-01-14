//30/3/18
class Bank
{
	final int acno;
	Bank(int u)
	{
		acno=u;
		//acno=4558;
	}
	/*void set(int u)
	{
		acno=u;
		acno=4558;
	}*/
	
	void show()
	{
		System.out.println(acno);
	}
	
	
	public static void main(String args[])
	{
		Bank a1=new Bank(455);
		Bank a2=new Bank(787);
		//a1.set(145);
		a1.show();
		a2.show();
		/*
		a1=new Bank(45);
		a1.show(); //to replace a1; new memory is allocated, but the variable remains the same
		*/
	}
}