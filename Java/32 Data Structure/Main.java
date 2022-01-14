import java.util.Scanner;

public class Main 
{
	
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		ImpLink ob=new ImpLink();
		while(true)
		{
			System.out.println("1. Insert At Begining");
			System.out.println("2. Display all List");
			System.out.println("3. Exit");
			System.out.println("4. Insert At End");
			System.out.println("Enter choice");
			int choice=sc.nextInt();
			switch (choice)
			{
				case 1:
					System.out.println("Enter a number");
					ob.IAB(sc.nextInt());
					break;
				
				case 2:
						ob.Disp();
						break;
				
				case 3:
						System.exit(0);
						break;
				case 4:
						System.out.println("Enter a number");
						ob.IAE(sc.nextInt());
						break;
				default:
					System.out.println("Bhul");
				break;
			}
		}
	}
}

