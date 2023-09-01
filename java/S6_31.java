import java.util.Scanner;

public class S6_31
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Integer[][] arr = new Integer[3][3];
        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr[i].length; j++) 
            {
                System.out.println("Enter value at "+i+","+j+" : ");         
                arr[i][j] = sc.nextInt();
            }
        }
        int max = arr[0][0];
        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr[i].length; j++) 
            {
                if(max <arr[i][j])
                    max = arr[i][j];
            }
        }
        System.out.println("max is : "+max);
    }
}