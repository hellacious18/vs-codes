import java.io.*;
import java.util.ArrayList;
import java.util.List;

class Circle implements Serializable 
{
    private double radius;
    public Circle(double radius) 
    {
        this.radius = radius;
    }
    public double getRadius() 
    {
        return radius;
    }
    public String toString() 
    {
        return "Circle [radius=" + radius + "]";
    }
}

public class S7_36 
{
    public static void main(String[] args) 
    {
        List<Circle> circles = new ArrayList<>();
        circles.add(new Circle(2.5));
        circles.add(new Circle(4.0));
        circles.add(new Circle(1.8));
        circles.add(new Circle(3.2));
        circles.add(new Circle(5.5));
        circles.add(new Circle(2.0));
        circles.add(new Circle(3.7));
        circles.add(new Circle(1.5));
        circles.add(new Circle(4.5));
        circles.add(new Circle(2.3));

        String filename = "circles.txt";

        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(filename))) 
        {
            for (Circle circle : circles) 
                oos.writeObject(circle);
            System.out.println("Objects written to file successfully.");
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }

        List<Circle> circlesFromFile = new ArrayList<>();
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(filename))) 
        {
            while (true) 
            {
                try 
                {
                    Circle circle = (Circle) ois.readObject();
                    circlesFromFile.add(circle);
                } 
                catch (EOFException e) 
                {
                    break;
                }
            }
            System.out.println("Objects read from file successfully.");
        } 
        catch (IOException | ClassNotFoundException e) 
        {
            e.printStackTrace();
        }
        if (!circlesFromFile.isEmpty()) 
        {
            Circle circleToUpdate = circlesFromFile.get(0);
            circleToUpdate = new Circle(6.0);
            circlesFromFile.set(0, circleToUpdate);
            System.out.println("Object updated successfully.");
        }

        if (!circlesFromFile.isEmpty()) 
        {
            Circle circleToRemove = circlesFromFile.get(2);
            circlesFromFile.remove(circleToRemove);
            System.out.println("Object removed successfully.");
        }

        for (Circle circle : circlesFromFile) 
            System.out.println(circle);
    }
}