import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int j=0,sum=0;
		Scanner sc=new Scanner(System.in);
		int a[]=new int[10];
		System.out.println("Enter the value of n");
		n=sc.nextInt;
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=2;i<n;i++)
		{
			if(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			if(i==j)
			{
				sum=sum+a[i];
			}
		}
		System.out.println("The sum is"+sum);
		// your code goes here
	}
}
