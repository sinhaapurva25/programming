package SwingDemo;
//actionpeformed
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JButton;

public class actionperformed implements ActionListener
{
	JTextField jtf;
	void Window()
	{
			JFrame jf= new JFrame();
			jf.setLayout(null);
			jf.setBounds(90,100,300,200);

			JLabel jl= new JLabel("NAME");
			jl.setBounds(10,20,100,30);
			jf.add(jl);
			
			jtf= new JTextField();
			jtf.setBounds(50,20,200,30);
			jf.add(jtf);
			
			JButton jb= new JButton("Click");
			jb.setBounds(50,80,100,30);
			jb.addActionListener(this);
			jf.add(jb);
			
			jf.setVisible(true);
			jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public static void main(String args[])
	{
		actionperformed ob=new actionperformed();
		ob.Window();
	}

	@Override
	public void actionPerformed(ActionEvent e)
	{
		String s=jtf.getText();
		JOptionPane.showMessageDialog(null, "Hello "+s);
	}
}