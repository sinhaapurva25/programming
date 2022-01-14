//HYBRID INHERITANCE 
//20180403

interface S
  {
	void a();
  }

 interface T extends S
  {
	void b();
  }
 interface U 
  {
	void c();
  }
 
 class V
 {
	 void show()
	 {
		 System.out.println("Hi");
	 }
 }
 
 class M extends V implements T,U
 {
	public void b()
	{
		System.out.println("GM");
	}	
	
	public void a()
	{
		System.out.println("GN");
	}
	
	public void c()
	{
		System.out.println("Bye");
	}
 }
 class X
 {
     public static void main(String[]args)
	 {
		 
		  M ob=new M();
	      ob.show();
		  ob.a();
		  ob.b();
		  ob.c();
	      
	 }
	 
 }