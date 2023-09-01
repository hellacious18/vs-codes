
import java.util.*;

class GetSet 
{ 
	private String name;
	private int enrollment;
	private String gender;
	
	public int Getenrollment() 
	{ 
 		return enrollment;
 	} 
 	public String Getname() 
	{ 
 		return name;
	} 
	public String Getgender() 
	{ 
		return gender; 
	} 
 	GetSet(String S, int N, String G) 
	{ 
 		this(N, G);
 		System.out.println("Name: "+ S);
 	} 
	public GetSet(int N, String G) 
	{ 
		this(N);
		System.out.println("Gender: "+G);
 	} 
	public GetSet(int N) 
	{ 
 		System.out.println("Enrollment: "+N);
 	} 
} 

class S3_12
{ 
	public static void main(String[] args) 
	{ 
 		Scanner sc = new Scanner(System.in);
 		int en_roll;
 		String N, G;
        System.out.println();
 		System.out.print("Enter Your Name : ");
 		N = sc.nextLine();
 		System.out.print("Enter Your Gender : ");
 		G = sc.nextLine();
 		System.out.print("Enter Your Enrollment : ");
 		en_roll = sc.nextInt();
        System.out.println();
		GetSet s = new GetSet(N, en_roll, G);
	}
}