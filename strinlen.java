import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
class strinlen
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int length=0,max=0;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String st=br.readLine();
		String word="";
		for(String str1:st.split(" "))
		{
			length=st1.length();
			if(length>max)
			{
				max=length;
				word=str1;
			}
		}
		System.out.println(word+"(length-"+max+")");
		
	}
}
