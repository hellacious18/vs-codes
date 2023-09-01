
class A 
{
    static int x = 10;
}
class B extends A 
{
    int x = 20;
    void display() 
    {
        System.out.println("Instance variable x in Class B: " + x);
        System.out.println("Static variable x in Class A: " + A.x);
    }
}

public class S4_20 
{
    public static void main(String[] args) 
    {
        B b = new B();
        b.display();
    }
}
