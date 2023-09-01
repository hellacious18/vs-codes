import java.io.File;

public class S7_35_2
{
    public static void main(String[] args) 
    {
        String filePath = "database.txt";
        File file = new File(filePath);

        if (file.exists()) 
            System.out.println("File exists at the specified path.");
        else 
            System.out.println("File does not exist at the specified path.");
    }
}