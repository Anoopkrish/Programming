import java.util.Scanner;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,j,x,y;
		Scanner sc=new Scanner(System.in);
		int a[]= new int[10];
		int b[]= new int[10];
		int c[]= new int[10];
		int k=0;
		for(i=0;i<a.length;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<b.length;i++)
		{
			b[i]=sc.nextInt();
		}
		for(x=0;x<a.length;x++)
		{
			for(y=0;y<b.length;y++)
			{
				if(a[x]==b[y])
				{
					c[k]=a[x];
				    System.out.println(c[k]);
				    k++;
				}
			}
		}
		// your code goes here
	}
}
