import java.util.Scanner;

public class S1_2
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
	    System.out.println("\n\nEnter amount of rupees to be convereted in dollars: ");
        float a = sc.nextFloat();
        System.out.println("\nConverted Amount in dollars: "+a/60);
    }   
}
