import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in=new Scanner(System.in);
		int a[]=new int[10];
		int sum=0;
	    System.out.println("Enter the value of n");
		int n=in.nextInt();
		for(int i=0;i<n;i++)
		{
			if(i%2!=0)
			{
				sum=sum+a[i];
 
			}
		}
		if(sum%2!=0)
		{
			System.out.println("1");
		}
		else
		{
			System.out.println("0");
		}
 
		// your code goes here
	}
}
