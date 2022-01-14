package StringDemo;
//20180424
public class immutableDemo 
{
    public static void main(String[] args)
    {
        String s="apu";
        String t="sin";
        System.out.println(s.hashCode());
        s=s.concat(t);
        System.out.println(s.hashCode());
    }
}