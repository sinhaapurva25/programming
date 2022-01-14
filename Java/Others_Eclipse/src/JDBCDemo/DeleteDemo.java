package JDBCDemo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.util.Scanner;

public class DeleteDemo 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		Class.forName("com.mysql.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/apurva","root","8420979565");
		PreparedStatement ps=con.prepareStatement("insert into studnet values(?,?,?)");
		
		ps.setInt(2, sc.nextLine());
		int h=ps.executeUpdate();
		if(h>0)
			System.out.println(h+" row deleted ");
		else
			System.out.println("no row deleted");
	}
}