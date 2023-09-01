import java.util.Scanner;

public class S2_1 
{
    public static void main( String [] args)
    {
        Scanner sc = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                if((i+j)%2==0)
                    arr[i][j]=0;
                else
                    arr[i][j]=1;
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
