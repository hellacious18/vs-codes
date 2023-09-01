import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.FileSystems;
import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;

public class S7_33 
{
    public static void main(String[] args) 
    {
        String fileName;
        String text = ".txt";
        if (args.length != 1) 
            System.out.println("Invalid input");
        else 
        {
            fileName = args[0].concat(text);
            System.out.println(fileName);
            String currentDirectory = System.getProperty("user.dir");
            Path searchDirectory = Paths.get(currentDirectory);
            try 
            {
                Files.walkFileTree(searchDirectory, new SimpleFileVisitor<Path>() 
                {
                    public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException 
                    {
                        if (file.getFileName().toString().equals(fileName)) 
                        {
                            System.out.println("File found: " + file.toString());
                            try (BufferedReader reader = new BufferedReader(new FileReader(file.toString()))) 
                            {
                                String line;
                                while ((line = reader.readLine()) != null) 
                                {
                                    System.out.println(line);
                                }
                            } 
                            catch (IOException e) 
                            {
                                e.printStackTrace();
                            }

                            return FileVisitResult.TERMINATE;
                        }
                        return FileVisitResult.CONTINUE;
                    }
                });
            } 
            catch (IOException e) 
            {
                e.printStackTrace();
            }
        }
    }
}