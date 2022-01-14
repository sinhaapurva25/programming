public class ImpLink 
{
	private Node beg,end;
	
	public ImpLink() 
	{
		beg=end=null;
	}
	
	
	public void IAB(int x)
	{
		Node t=new Node(x);
		if(beg==null)
			beg=end=t;
		else
		{
			t.setNext(beg);
			beg=t;
			
		}
	}
	
	public void IAE(int x)
	{
		Node t=new Node(x);
		if(beg==null)
			beg=end=t;
		else
		{
			end.setNext(t);
			end=t;
			
		}
	}
	
	public void Disp()
	{
		if(beg==null && end==null)
			System.out.println("Tomar list Khali");
		else
		{
			Node t=beg;
			while(t!=null)
			{
				System.out.print(t.getData()+"->");
				t=t.getNext();
			}
			
			System.out.println("Null");
		}
	}
	
}