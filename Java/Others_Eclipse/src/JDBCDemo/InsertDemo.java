package JDBCDemo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.util.Scanner;

public class InsertDemo 
{
	public static void main(String[] args) throws Exception 
	{
		Scanner sc= new Scanner(System.in);
		Class.forName("com.mysql.jdbc.Driver");
		
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/apurva","root","8420979565");
		PreparedStatement ps=con.prepareStatement("insert into studnet values(?,?,?)");
		
		System.out.println("Enter name");
		ps.setString(1, sc.nextLine());
		
		System.out.println("Enter roll");
		ps.setString(2, sc.nextLine());
		
		System.out.println("Enter total");
		ps.setString(3, sc.nextLine());
		
		int count=ps.executeUpdate();
		if(count>0)
			System.out.println(count+" row inserted ");
		else
			System.out.println("no row inserted");
	}

}