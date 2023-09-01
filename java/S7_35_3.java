import java.io.File;
import java.io.IOException;

public class S7_35_3 
{
    public static void main(String[] args) 
    {
        String filePath = "database.txt";

        File file = new File(filePath);

        try 
        {
            if (file.createNewFile()) 
                System.out.println("File created successfully.");
            else 
                System.out.println("File already exists.");
        } 
        catch (IOException e) 
        {
            System.out.println("An error occurred while creating the file.");
            e.printStackTrace();
        }
    }
}