import java.util.concurrent.CountDownLatch;

public class S1_5 
{
    public static void main(String args[])
    {
        int a = 4;
        double b = a;       //widening type conversion
        System.out.println(a);
        System.out.println(b);

        double c = 8;
        int d = (int) c;    //narrowing type conversion
        System.out.println(c);
        System.out.println(d);
    }    
}