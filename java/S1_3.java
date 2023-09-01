import java.util.Scanner;

public class S1_3
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int[] sub = new int[6];
		float sum=0;
		for(int i=0;i<6;i++)
		{
			System.out.print("\nsub "+(i+1)+": ");
			sub[i]=sc.nextInt();
			sum=sum+sub[i];
		}
		System.out.println("Percentage marks of student: "+((sum/60)*100));
	}
}