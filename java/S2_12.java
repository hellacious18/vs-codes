import java.util.Random;

public class S2_12 
    {
    public static void main(String args[])
    { 
        int p1, p2, x=0, y=0;
        Random dice = new Random(); 
        System.out.println("\tPerson 1 Person 2"); 
        while((x<=30) && (y<=30))
        { 
            p1 = dice.nextInt(6) + 1;
            p2 = dice.nextInt(6) + 1; 
            System.out.println(" \t " + p1 + " \t "+ p2); 
            x+=p1; 
            y+=p2; 
        } 
        System.out.println(" \t " + x + " \t "+ y); 
        if(x>y) 
            System.out.print("First person is the winner"); 
        else 
            System.out.print("Second person is the winner"); 
    }
}
