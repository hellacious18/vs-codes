import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class S7_35_4 
{
    public static void main(String[] args) 
    {
        String inputFile = "database.txt";
        String outputFile = "file.txt";
        String wordToReplace = "Hello";
        String replacementWord = "acces";
        int replacementCount = 0;

        try (BufferedReader reader = new BufferedReader(new FileReader(inputFile)); 
        BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile))) 
        {
            String line;
            while ((line = reader.readLine()) != null) 
            {
                String modifiedLine = line.replaceAll(wordToReplace, replacementWord);
                writer.write(modifiedLine);
                writer.newLine();
                replacementCount += countOccurrences(line, wordToReplace);
            }
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
        System.out.println("Replacement count: " + replacementCount);
        System.out.println("Output written to file: " + outputFile);
    }

    private static int countOccurrences(String line, String word) 
    {
        int count = 0;
        int index = line.indexOf(word);
        while (index != -1) 
        {
            count++;
            index = line.indexOf(word, index + 1);
        }
        return count;
    }
}