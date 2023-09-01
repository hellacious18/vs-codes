import java.util.*;

class Parent 
{
    void show()
    {
        System.out.print("Parent class");
    }
}
class Child extends Parent
{
    void show()
    {
        System.out.print("Child class");
    }
}
public class S4_19_1 
{
    public static void main(String args[])
    {
        Parent p = new Child();
        p.show();
    }
}
