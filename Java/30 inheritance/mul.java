//MULTIPLE INHERITANCE
//20180403
interface K
{
	void m();
	
}interface N
{
	void m();
	
}
class T implements K,N
{
	public void m()
	{
		System.out.println("Good Night");
	}
}
class O
{
    public static void main(String[]args)
	{
		T ob=new T();
		ob.m();
	}	
}