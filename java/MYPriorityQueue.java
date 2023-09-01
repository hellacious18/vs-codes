import java.util.PriorityQueue;

public class MYPriorityQueue<T> extends PriorityQueue<T> implements Cloneable 
{
    public MYPriorityQueue<T> clone() 
    {
        MYPriorityQueue<T> clonedQueue = new MYPriorityQueue<>();
        clonedQueue.addAll(this);
        return clonedQueue;
    }
    public static void main(String[] args) 
    {
        MYPriorityQueue<Integer> queue1 = new MYPriorityQueue<>();
        queue1.add(10);
        queue1.add(0);
        queue1.add(5);

        MYPriorityQueue<Integer> queue2 = queue1.clone();

        System.out.println("Original Queue: " + queue1);
        System.out.println("Cloned Queue: " + queue2);
    }
}
