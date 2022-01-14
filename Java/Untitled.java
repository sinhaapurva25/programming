Vowels, consonants, words
import java.util.Scanner;

public class frequency 
{
	public static void main(String[] args) 
	{
		String str;
	    Scanner sc = new Scanner(System.in);
	 
	    System.out.println("Enter a string:");
	    str = sc.nextLine();
	    int vowels=0, words=1;
	    char[] c=str.toCharArray();
	    
	    for(int i=0;i<str.length();i++)
	    {
	    	switch(c[i])
	    	{
	    	case 'a':
	    	case 'e':
	    	case 'i':
	    	case 'o':
	    	case 'u':
	    	case 'A':
	    	case 'E':
	    	case 'I':
	    	case 'O':
	    	case 'U':
	    		vowels++;
	    		continue;
	    	case ' ':
	    		words++;
	    		continue;
	    	}
	    }
	    System.out.println("No. of vowels= "+vowels);
	    System.out.println("No. of words= "+words);
	    System.out.println("No. of consonants= "+(str.length()-vowels-words+1));
	}
}
Output:
Enter a string:
Q W E R T Y U I O P A S D F G H J K L Z X C V B N M
No. of vowels= 5
No. of words= 26
No. of consonants= 21

Catch multiple exception using try catch
 
 

Evaluate area of triangle, rectangle, circle
 
 
 
User defined exception
 
Palindrome String
public class palindrome 
{
	public static void main(String[] args) 
	{
		String str="techno india university";
		String rev="";
		
		for (int i=str.length()-1; i >= 0; i-- )
	         rev = rev + str.charAt(i);

if (str.equals(rev))
	         System.out.println(str+" is palindrome");
	      else
	         System.out.println(str+" is paglachoda");
	}
}
Output:
techno india university is -


Armstrong number
 
 Evaluate sum of n natural numbers
yeh toh khudse karle besharam

Implement Singleton Class
A singleton class is a class that can have only one object (an instance of the class) at a time.The purpose of singleton is to control object creation by keeping private constructor.

public class MySingleTon
	{
	     
	    private static MySingleTon myObj;
	    private MySingleTon()
{
	         
	}
	    public static MySingleTon getInstance(){
	        if(myObj == null){
	            myObj = new MySingleTon();
	        }
	        return myObj;
	    }
	     
	    public void getSomeThing(){
	        // do something here
	        System.out.println("I am here....");
	    }
	     
	    public static void main(String a[]){
	        MySingleTon st = MySingleTon.getInstance();
	        st.getSomeThing();
	    }
	}
Output
I am here....

Create a class student having attributes roll (integer), name(string) and marks(double). Create appropriate constructors and a show method to output the values of roll, name and marks of each student. Create an array of 3 student objects and show the result.


INHERITANCE 
 
ARRAY OF OBJECTS
 
