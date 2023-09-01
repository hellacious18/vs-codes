
class Circle 
{
    static int instanceCount = 0;
    double radius;

    Circle() 
    {
        this(0.0); // Constructor chaining
    }

    Circle(double radius) 
    {
        this.radius = radius;
        instanceCount++;
    }

    static int getInstanceCount() 
    {
        return instanceCount;
    }

    public static void main(String[] args) 
    {
        Circle circle1 = new Circle();
        Circle circle2 = new Circle(5.0);
        Circle circle3 = new Circle(3.0);

        System.out.println("Number of instances created: " + Circle.getInstanceCount());
    }
}
