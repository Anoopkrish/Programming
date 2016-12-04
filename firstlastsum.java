
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a[]=new int[5];
		int sum,x,y,i;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the value of n");
		int n=sc.nextInt();
		System.out.println("Enter the numbers");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		x=a[0];
		y=a[n-1];
		sum=x+y;
		System.out.print("The sum is"+ sum);
		// your code goes here
	}
}
