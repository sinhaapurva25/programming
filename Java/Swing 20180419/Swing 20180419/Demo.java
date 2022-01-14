//20180419
import javax.swing.JFrame;
import javax.swing.JButton;

public class Demo
/*
class Demo is public, should be declared in a file named Demo.java
public class Demo
*/
{
	public static void main(String[] args) 
	{
		JFrame ob= new JFrame();
		ob.setLayout(null);
		ob.setBounds(90, 100, 300, 400);
		
		JButton jb= new JButton("Click");
		jb.setBounds(10,20,200,30);
		ob.add(jb);
		
		//ob.setSize(300,400);
		//ob.setResizable(false);
		ob.setTitle("my project");
		ob.setVisible(true);
		ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
