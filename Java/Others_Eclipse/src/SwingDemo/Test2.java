package SwingDemo;
//20180419
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class Test2

{

	public static void main(String[] args) 
	{
		JFrame jf=new JFrame();
		jf.setSize(800,800);
		jf.setLayout(null);
		
		JLabel jl0= new JLabel("First name");
		jl0.setBounds(100,100,5,5);
		jf.add(jl0);
		
		JTextField jtf0= new JTextField("");
		jtf0.setBounds(300,100,5,5);
		jf.add(jtf0);
		
		JLabel jl1= new JLabel("Roll");
		jl1.setBounds(100,250,5,5);
		jf.add(jl1);
		
		JTextField jtf1= new JTextField("");
		jtf1.setBounds(300,250,5,5);
		jf.add(jtf1);
		
		JLabel jl2= new JLabel("Subject");
		jl2.setBounds(100,750,5,5);
		jf.add(jl2);
		
		JTextField jtf2= new JTextField("");
		jtf2.setBounds(100,750,5,5);
		jf.add(jtf2);
		
		JButton jb0=new JButton("SAVE");
		jb0.setBounds(150,100,5,5);
		jf.add(jb0);
		
		JButton jb1=new JButton("CLEAR");
		jb1.setBounds(550,1000,5,5);
		jf.add(jb1);
		
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}