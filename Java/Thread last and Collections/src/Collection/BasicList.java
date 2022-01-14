package Collection;

import java.util.ArrayList;
import java.util.Collections;

public class BasicList 
{
	public static void main(String[] args) 
	{
		ArrayList ob=new ArrayList();
		ArrayList ob1=new ArrayList();
		/*ob.add(10);
		ob.add(25.25);
		ob.add("sfugdsfhjdgsu");
		ob.add('v');*/
		
		ob1.add(2558);
		ob.add(12.25);
		ob.add(10);
		ob.add(1);
		ob.add(5.3);
		ob.add(8);
		ob.add(3);
		
		ob.addAll(ob1);
		System.out.println(ob);
		/*System.out.println(ob);
		Collections.sort(ob);
		System.out.println(ob);
		
		System.out.println(ob.indexOf(5));*/
		
	}
}
