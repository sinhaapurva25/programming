//for each loop
//22/3/18
import java.util.Scanner;
class A
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size of list");
		int n=sc.nextInt();
		
		int[] x=new int[n];
		/*int[] x=new int[10]; when you give the limit of the no. of houses
		the first houses are alloted the value the data we give and the
		rest are zero
		*/
		
		
		for(int i=0;i<n;i++)
		{
			x[i]=sc.nextInt();
		}
		
		for(int i=0;i<n;i++)
		{
			System.out.println(x[i]);
		}
		
		System.out.println(".......................");
		for(int val:x)
		{
			System.out.println(val);
			System.out.println(val+10); //try this in for each loop
		}
		
		
	}
}

/*
for (type var : array) 
{ 
    statements using var;
}
is equivalent to:

for (int i=0; i<arr.length; i++) 
{ 
    type var = arr[i];
    statements using var;
}
*/