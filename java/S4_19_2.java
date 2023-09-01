import java.util.*;

class Parent {}

class Child extends Parent {}

public class S4_19_2 
{
    public static void main(String s[])
    {
        Parent p = new Child();

        if(p instanceof Child)
            System.out.println("Instance of Child Class");
        else
            System.out.println("NOT Instance of Child Class");
    }
}
