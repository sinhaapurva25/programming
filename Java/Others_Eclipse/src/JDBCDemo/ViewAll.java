package JDBCDemo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

public class ViewAll 
{
	public static void main(String[] args) throws Exception 
	{
		Class.forName("com.mysql.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/apurva","root","8420979565");
		PreparedStatement ps=con.prepareStatement("insert into studnet values(?,?,?)");
		
		while(rs.next())
		{
			System.out.println(rs.getString(1)+" "+rs.getInt("sroll")+" "rs.getInt(3));
		}
		
	}
}