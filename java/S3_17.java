class HideParent 
{
	public static void f1() 
	{
 		System.out.println("Parent class is printing ");
 	}
}

class HideChild extends HideParent 
{
 	public static void f1() 
	{
 		System.out.println("Child class is not printing");
 	}
}

public class S3_17
{
 	public static void main(String[] args) 
	{
 		HideParent demo1 = new HideParent();
 		HideParent demo2 = new HideChild();
 		demo1.f1();
 		demo2.f1();
 	}
}