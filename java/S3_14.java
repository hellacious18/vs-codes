import java.util.*;

class count 
{
	int radius;
 	private int count;
 	public int getCount() 
	{
 		return count;
 	}
 	count(int radius) 
	{
		this();
 		this.radius = radius;
 	}
 	count() 
	{
	count++;
 	}
}

public class S3_14
{
 	public static void main(String[] args) 
	{
 		Scanner sc = new Scanner(System.in);
 		System.out.print("\n\tEnter Circle Radius : ");
 		int r = sc.nextInt();
 		count c = new count(r);
  		System.out.print("\tYour Instance Count is : ");
 		System.out.println(c.getCount());
 	}
}