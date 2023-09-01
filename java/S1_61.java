import java.util.Scanner;

public class S1_61 
{
    public static void main(String args[])
    {
        int sum=0;
        Scanner sc=new Scanner(System.in);
        System.out.print("enter number of rows: ");
        int rows=sc.nextInt();
        for(int i=rows; i>0; --i)
        {
            for(int j=i; j<=rows; j++)
            {
                System.out.print(i+" ");
                sum+=i;
            }
            System.out.println("\n");
        }
        System.out.println("sum: "+sum);
    }
}
