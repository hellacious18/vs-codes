public class S5_24
{
    public static void main(String[] args) throws Exception 
    {

        int i = 5;
        try 
	    {
            if (i < 10) 
                throw new Exception("Errrrroorrrr for i must be greater than 10");
            try 
	        {
                int a[] = new int[5];
                a[5] = 4;
            } 
	        catch (ArrayIndexOutOfBoundsException e) 
	        {
                System.out.println(e);
            }
        } 
	    catch (Exception e) 
	    {
            System.out.println(e);
        } 
	    finally 
	    {
            System.out.println("\nYour Progam Executed Successfully !! ");
        }
    }
}