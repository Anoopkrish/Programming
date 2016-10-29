
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String str="abcddaabcd";
		ArrayList<Character> list=new ArrayList<Character>();
		char letters[]=str.toCharArray();
		Arrays.sort(letters);
		char prev=letters[0];
		list.add(prev);
		for(int i=1;i<letters.length;i++)
		{
			if(!(prev==letters[i]))
			{
				list.add(letters[i]);
				
			}
			prev=letters[i];
		}
		for(int i=0;i<list.size();i++)
		{
			System.out.println(list.get(i));
		}
		
		// your code goes here
	}
}
