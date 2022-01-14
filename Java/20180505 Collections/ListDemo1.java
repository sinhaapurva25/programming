package TestCollect;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class ListDemo 
{
	public static void main(String[] args) 
	{
		ArrayList<String> li=new ArrayList<String>();

		/*li.add(10);
		li.add(5);
		li.add(1);
		li.add(6);
		li.add(78);
		li.add(9);
		li.add(5);
		System.out.println(li);
		*/
		li.add("Atanu");
		li.add("sudip");
		li.add("Pranab");
		li.add("Anjarul");
		
		System.out.println(li);
		Collections.sort(li);
		System.out.println(li);
		//System.out.println(li.indexOf(6));
		//System.out.println(li.lastIndexOf(5));
		//li.add(14.5);
		//li.add("sdfjkhskjus");
		//li.add('A');
		
		/*li.add(10);
		li.add(5);
		li.add(1);
		li.add(6);
		li.add(78);
		li.add(9);
		li.add(5);
		System.out.println(li);
		*/
		
	/*	Iterator it=li.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}*/
		
	}
	
}