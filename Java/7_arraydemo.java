//dynamically access an array
//22/3/18
import java.util.Scanner;
class A
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size of list"); 
		int n=sc.nextInt();
		
		int[] x=new int[n];//int x[]=new int[n];
		
		for(int i=0;i<n;i++)
		{
			x[i]=sc.nextInt();
		}
		
		for(int i=0;i<n;i++)
		{
			System.out.println(x[i]);
		}
		
		
	}
}//in java everything is done dynamically