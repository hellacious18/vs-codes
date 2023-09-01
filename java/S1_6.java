import java.util.Scanner;

public class S1_6 
{
    public static void main(String args[])
    {
        int sum=0;
        Scanner sc=new Scanner(System.in);
        System.out.print("enter number of rows: ");
        int rows=sc.nextInt();
        for(int i=0; i<=rows; i++)
        {
            for(int j=0; j<i; j++)
            {
                System.out.print(i+" ");
                sum+=i;
            }
            System.out.println("\n");
        }
        System.out.println("sum: "+sum);
    }
}
