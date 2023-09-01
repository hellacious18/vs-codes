import java.util.Scanner;

public class S1_1 
{
    public static void main(String srgs[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("\n\nenter 3 elements for sum & average: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int sum = a+b+c;
        int average=sum/3;
        System.out.println("sum: "+sum+", average: "+average);
    }   
}
