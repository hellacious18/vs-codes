class Person
{
	String name;
 	int age;
 	Person(String name, int age)
	{
 		this.name=name;
 		this.age=age;
 	}
 	String getName() 
	{ 
 		return name;
 	} 
 	int getAge() 
	{ 
 		return age;
 	} 
}
 
class Student extends Person
{ 
	int Roll_no;	
	Student(String name, int age, int Roll_no)
	{ 
 		super(name, age);
 		this.Roll_no=Roll_no;
 	} 
 	int getRoll_no() 
	{ 
 		return Roll_no;
 	} 
}
 
class S3_16
{ 
 	public static void main(String[] args) 
	{ 
        	System.out.println();
 		Person P=new Person("Helly",20);
 		System.out.println("Name:"+P.getName());
	 	System.out.println("Name:"+P.getAge()+"\n"); 
	
		Student S=new Student("Helly",20,18);
		System.out.println("Name:"+S.getName());
 		System.out.println("Age:"+S.getAge());
 		System.out.println("Roll_no:"+S.getRoll_no());
 	} 
}