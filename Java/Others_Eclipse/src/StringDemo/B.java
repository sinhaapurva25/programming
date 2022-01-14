package StringDemo;
//20180424
//now put the A.java code in an array and print the ASCII values of each of the characters
public class B 
{
  public static void main(String[] args)
  {
      String s=String.format("%d + %d = %d", 14,5,14+5);
      System.out.println(s);
      byte x[]="abcd".getBytes();
      for(byte k:x)
      {
          System.out.println(k);
          System.out.println((char)k);// TO PRINT THE CHARACTER OF THAT ASCII CODE
          /*
           *System.out.print(k+" ");
           *System.out.println((char)k);
           */
      }    
  }
}
