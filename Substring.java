import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the first string");
		String a=in.next();
		System.out.println("Enter the second string");
		String b=in.next();
		if(a.contains(b))
		{
			System.out.println("yes");
		}
		else
		{
		System.out.println("no");
		}
		
		// your code goes here
	}
}
