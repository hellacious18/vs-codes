import java.util.*;

abstract class Shape
{
    abstract void Area();
}
class Triangle extends Shape
{
    void Area()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of Height: ");
        int a = sc.nextInt();
        System.out.print("\nEnter value of Base: ");
        int b = sc.nextInt();
        float area = (float)(a*b)/2;
        System.out.println("\nArea:"+area);
    }
}
class Rectangle extends Shape
{
    void Area()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of Height: ");
        int a = sc.nextInt();
        System.out.print("\nEnter value of Base: ");
        int b = sc.nextInt();
        int area = a*b;
        System.out.println("\nArea:"+area);
    }
}

class Circle extends Shape
{
    void Area()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of Radius: ");
        int a = sc.nextInt();
        float area = (float) 3.14*a*a;
        System.out.println("\nArea:"+area);
    }
}

public class S4_18 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int x=1;
        while(x==1)
        {
            System.out.print("\n\n1. Triangle\t\t2.Rectangle\t\t3.Circle\t\t4.Exit\n\n\t\t\tEnter shape to find it's area: ");
            int n = sc.nextInt();
            switch(n)
            {
                case 1: Shape t = new Triangle();
                        t.Area();
                        break;
                case 2: Shape r = new Rectangle();
                        r.Area();
                        break;
                case 3: Shape c = new Circle();
                        c.Area();
                        break;
                case 4: x=0;
                        break;
                default: System.out.println("you entered wrong value!");
            }
        }
    }
}
