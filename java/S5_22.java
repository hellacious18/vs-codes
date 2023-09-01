import java.util.Scanner;

interface Exam 
{
    boolean pass(int mark);
}

interface Classify 
{
    String Division(int average);
}

class Result implements Exam, Classify 
{
    public String Division(int average) 
    {
        if (average >= 60) 
            return "First"; 
        else if (average >= 50 && average < 60) 
            return "Second";
        else 
            return "No Division";
        
    }

    public boolean pass(int mark) 
    {
        if (mark >= 50) 
            return true;
        else 
            return false;
        
    }
}
public class S5_22 
{
    public static void main(String[] args) 
    {
        Result r = new Result();
        System.out.println("\nEnter Three Subject Mark out of 100 ");
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the Mark of Maths : ");
        int Maths = sc.nextInt();
        System.out.print("Enter the Mark of Physics : ");
        int phy = sc.nextInt();
        System.out.print("Enter the Mark of Chemistry : ");
        int Chem = sc.nextInt();
        System.out.println("\nResult For Each Subject is: ");
        if (r.pass(Maths) == true) 
            System.out.println("Pass in Maths");
        else 
            System.out.println("Fail in Maths");

        if (r.pass(Chem) == true) 
            System.out.println("Pass in Chemistry");
        else 
            System.out.println("Fail in Chemistry");

        if (r.pass(phy) == true) 
            System.out.println("Pass in Physics");
        else 
            System.out.println("Fail in Physics");

        double average = (Maths + phy + Chem) / 3;
        System.out.println("\nYour Divisioin is " + r.Division((int) average));
    }
}