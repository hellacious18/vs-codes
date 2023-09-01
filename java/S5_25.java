import java.util.*;

public class S5_25 
{
    public static void main(String[] args) 
    {
        int deposit = 1000;
        System.out.println("\nYour Total Amount is 1000");
        System.out.print("\nEnter Amount For WithDraw :");
        Scanner sc = new Scanner(System.in);
        try
	    {
            int w = sc.nextInt();
            if (w > 500) 
                throw new InputMismatchException();
        } 
	    catch (InputMismatchException e) 
	    {
            System.out.println("Not Sufficient Fund");
        } 
	    finally 
	    {
            System.out.println("Your Program Exucuted SuccessFully !! ");
        }
    }
}