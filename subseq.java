import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in=new Scanner(System.in);
	    String str=in.next();
	    CharSequence ch=str.subSequence(1,2);
	    String str1=ch.toString().toUpperCase();
	    System.out.println(str.substring(0,1)+str1+str.substring(2,str.length()));
	    // your code goes here
	}
}
