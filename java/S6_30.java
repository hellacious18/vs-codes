import java.util.*;

public class S6_30
{
	static int max(Integer[] array, int n)
    {
		if(n == 1)
            return array[0]; 
        return Math.max(array[n-1], max(array, n-1));
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Integer[] arr = new Integer[3];
        int n = arr.length;
        for (int i = 0; i < arr.length; i++)
        {
            System.out.println("\nEnter Number: " +(i+1));
            arr[i] = sc.nextInt();
        }
        int m = max(arr,n);
        System.out.println("\nmax is : "+m);
        System.out.print("\nEnter a number to multiply with: ");
        int a = sc.nextInt();
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i] +" * " +a +" is: " +(arr[i]*a));
            
        }
}