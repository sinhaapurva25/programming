package TestCollect;

import java.util.*;
public class ListDemo 
{
	public static void main(String args[])
	{  
		  
		  HashSet<String> set=new HashSet<String>();  
		  set.add("Ravi");  
		  set.add("Vijay");  
		  set.add("Ravi");  
		  set.add("Ajay");  
		  
		  set.add("Ravi");  
		  set.add("Vijay");  
		  set.add("Ravi");  
		  set.add("Ajay");
		  //Traversing elements  
		  Iterator<String> itr=set.iterator();  
		  while(itr.hasNext())
		  {  
		   System.out.println(itr.next());  
		  }  
	}  
	
}
