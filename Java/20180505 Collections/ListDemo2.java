////////////////////////For Each Loop////////////////////////////////////




package TestCollect;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class ListDemo 
{
	public static void main(String[] args) 
	{
		ArrayList<Integer> li=new ArrayList<Integer>();

		li.add(10);
		li.add(5);
		li.add(1);
		li.add(6);
		li.add(78);
		li.add(9);
		li.add(5);
		
		for(int o:li)
		{
			System.out.println(o);
		}
		
		
	}
	
}