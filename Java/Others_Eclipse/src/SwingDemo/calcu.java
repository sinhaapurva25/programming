package SwingDemo;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class calcu implements ActionListener
 
{
	JTextField jtf0, jtf1, jtf2;
	void Window()
	{
		JFrame jf=new JFrame();
		jf.setSize(600,400);
		jf.setLayout(null);
		
		JLabel jl0= new JLabel("First number");
		jl0.setBounds(10,10,200,30);
		jf.add(jl0);
		
		jtf0= new JTextField("");
		jtf0.setBounds(200,10,200,30);
		jf.add(jtf0);
		
		JLabel jl1= new JLabel("Second number");
		jl1.setBounds(10,60,200,30);
		jf.add(jl1);
		
		jtf1= new JTextField("");
		jtf1.setBounds(200,60,200,30);
		jf.add(jtf1);
		
		JButton jb0=new JButton("+");
		jb0.setBounds(10,100,50,50);
		jb0.addActionListener(this);
		jf.add(jb0);
		
		JButton jb1=new JButton("-");
		jb1.setBounds(100,100,50,50);
		jb1.addActionListener(this);
		jf.add(jb1);
		
		JButton jb2=new JButton("/");
		jb2.setBounds(200,100,50,50);
		jb2.addActionListener(this);
		jf.add(jb2);
		
		JButton jb3=new JButton("*");
		jb3.setBounds(300,100,50,50);
		jb3.addActionListener(this);
		jf.add(jb3);
		
		JLabel jl2= new JLabel("Result");
		jl2.setBounds(10,200,200,30);
		jf.add(jl2);
		
		jtf2= new JTextField("");
		jtf2.setBounds(200,200,200,30);
		jf.add(jtf2);
		
		JButton jb4=new JButton("EXIT");
		jb4.setBounds(20,250,80,30);
		jf.add(jb4);
		
		JButton jb5=new JButton("CLEAR");
		jb5.setBounds(200,250,80,30);
		jf.add(jb5);
		
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}	
		public static void main(String[] args) 
		{
			calcu ob=new calcu();
			ob.Window();
		}
		
		@Override
		public void actionPerformed(ActionEvent e)
		{
			if(e.getActionCommand().equals("+"))
			{
				int s0=Integer.parseInt(jtf0.getText());
				int s1=Integer.parseInt(jtf1.getText());
				int s2=s0+s1;
				jtf2.setText(String.valueOf(s2));
			}
			
			else if(e.getActionCommand().equals("-"))
			{
				int s0=Integer.parseInt(jtf0.getText());
				int s1=Integer.parseInt(jtf1.getText());
				int s2=s0-s1;
				jtf2.setText(String.valueOf(s2));
			}
			
			else if(e.getActionCommand().equals("*"))
			{
				int s0=Integer.parseInt(jtf0.getText());
				int s1=Integer.parseInt(jtf1.getText());
				int s2=s0*s1;
				jtf2.setText(String.valueOf(s2));
			}
			
			else if(e.getActionCommand().equals("/"))
			{
				int s0=Integer.parseInt(jtf0.getText());
				int s1=Integer.parseInt(jtf1.getText());
				int s2=s0/s1;
				jtf2.setText(String.valueOf(s2));
			}
			
			else if(e.getActionCommand().equals("EXIT"))
			{
				System.exit(0);
			}
			
			else if(e.getActionCommand().equals("CLEAR"))
			{
				jtf0.setText("");
				jtf1.setText("");
				jtf2.setText("");
			}
			
		
		}
}