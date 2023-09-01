import java.util.Scanner;

public class S7_34 
{
    public static void main(String[] args) 
    {
        int temp;
        System.out.print("\nEnter any Number: ");
        Scanner ans = new Scanner(System.in);
        temp = ans.nextInt();
        Thread even1 = new Thread(new eventhread(temp));
        even1.start();
        Thread odd1 = new Thread(new oddthread(temp));
        odd1.start();
        ans.close();
    }
}

class eventhread extends Thread 
{
    int x;
    eventhread(int x) 
    {
        this.x = x;
    }
    public void run() 
    {
        int sum = 0;
        for (int i = 2; i <= x; i += 2) 
            sum += i;
        try 
        {
            this.sleep(2000);
        } 
        catch (InterruptedException e) 
        {
            e.printStackTrace();
        }
        System.out.println("\nTotal of first " + x + " even numbers: " + sum);
    }
}

class oddthread extends Thread 
{
    int x;
    oddthread(int x) 
    {
        this.x = x;
    }
    public void run() 
    {
        int sum = 0;
        for (int i = 1; i <= x; i += 2) 
            sum += i;
        try 
        {
            this.sleep(3000);
        } 
        catch (InterruptedException e) 
        {
            e.printStackTrace();
        }
        System.out.println("\nTotal of first " + x + " odd numbers: " + sum);
    }
}