import java.util.Random;

public class S2_11 
{
    public static void main(String [] args) 
    {
        Random r = new Random(1000);
        for(int i=0; i<100; i++)
        {
            System.out.format("%10d", r.nextInt(49)+1);
            if((i+1)%50==0)
                System.out.println();
        }
    }
}
