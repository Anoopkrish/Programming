import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a[]=new int[5];
		int i,flag=1;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println("Enter the array");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<n;i++)
		{
			if(a[i]<a[i+1])
			{
				flag=1;		
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			System.out.println("Sorted");
		}
		else
		{
			System.out.println("Not sorted");
		}
		// your code goes here
	}
}
