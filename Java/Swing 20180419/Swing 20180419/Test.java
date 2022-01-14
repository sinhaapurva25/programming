//20180419
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;

public class Test
/*
class Test is public, should be declared in a file named Test.java
public class Test
*/
{
	public static void main(String args[])
	{
		JFrame jf= new JFrame();
		jf.setLayout(null);
		jf.setBounds(90,100,300,200);

		JLabel jl= new JLabel("NAME");
		jl.setBounds(10,20,100,30);
		jf.add(jl);
		
		JTextField jtf= new JTextField();
		jtf.setBounds(50,20,200,30);
		jf.add(jtf);
		
		JButton jb= new JButton("Click");
		jb.setBounds(50,80,100,30);
		jf.add(jb);
		
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}