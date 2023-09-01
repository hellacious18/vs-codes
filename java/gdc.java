import java.util.*;
public class gdc 
{
    public static int GCD(int num1, int num2) 
    {
       while(num1!=num2)
       {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
       } 
       return num1;
    }
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter two values to find gcd: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.print("gcd of "+a+" & " +b+" : "+GCD(a,b));
    }
}
