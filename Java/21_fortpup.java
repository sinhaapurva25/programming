//function overriding run-time polymorphism up-casting
//22/3/18
class Parent
{
	void car()
	{
		System.out.println("vento");
	}
}


class Child extends Parent
{
	void car()
	{
		System.out.println("AUDI");
	}
}

class Main
{
	public static void main(String[] args)
	{
		//Child ob=new Child();
		//ob.car();
		
		Parent ob=new Child();
		ob.car();
		
		
		ob=new Parent();
		ob.car();
	}
}