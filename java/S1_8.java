import java.util.Scanner;

class S8
{
    void func(int num)
    {
        for (int i = 2; i <= num; i++) 
        {
            while (num % i == 0) 
            {
                System.out.print(i + " ");
                num = num/i;
            }
        }
    }
}
public class S1_8 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("\n\nenter number to get its smallest factors");
        int num =  sc.nextInt();
        S8 s = new S8();
        s.func(num);
    }    
}
