import java.util.*;

class Student 
{
    String enrollmentNo;
    String name;
    String gender;
    
    Student(String enrollmentNo, String name, String gender) 
    {
        this.enrollmentNo = enrollmentNo;
        this.name = name;
        this.gender = gender;
    }
    Student(String enrollmentNo) 
    {
        this(enrollmentNo, "", ""); // Constructor chaining
    }
    String getEnrollmentNo() 
    {
        return enrollmentNo;
    }
    void setEnrollmentNo(String enrollmentNo) 
    {
        this.enrollmentNo = enrollmentNo;
    }
    String getName() 
    {
        return name;
    }
    void setName(String name) 
    {
        this.name = name;
    }
    String getGender() 
    {
        return gender;
    }
    void setGender(String gender) 
    {
        this.gender = gender;
    }
    public static void main(String[] args) 
    {
        Student student1 = new Student("1", "Hemsworth", "Male");
        System.out.println("Enrollment No: " + student1.getEnrollmentNo());
        System.out.println("Name: " + student1.getName());
        System.out.println("Gender: " + student1.getGender());
        System.out.println();
        Student student2 = new Student("2");
        student2.setName("Helly");
        student2.setGender("Female");
        System.out.println("Enrollment No: " + student2.getEnrollmentNo());
        System.out.println("Name: " + student2.getName());
        System.out.println("Gender: " + student2.getGender());
    }
}

