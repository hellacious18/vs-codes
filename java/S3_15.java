import java.util.*;

class acc
{
	double accountNo;
	float balance;
}

class Saving extends acc
{
	float interestRate;
	void checkBalance()
	{
		System.out.println("The balance of saving account is : " +balance+ "\n");
	}
	void deposit(float amount)
	{
		this.balance+=amount;
		System.out.println(+amount+ " is credited to your account\n");
	}
	void withdraw(float Amount)
	{
		if(this.balance==0)
			System.out.println("Your account balance is zero. You can't withdraw money!!\n");
		else if(this.balance-Amount<0)
			System.out.println("Insufficient balance!!\n");
		else
		{
			this.balance-=Amount;
			System.out.println(+Amount+ " is debited from your account\n");
		}
	} 
}

class Current extends acc
{
	float overdraftlimit;
	void checkBalance()
	{
		System.out.println("The balance of current account is : " +balance+ "\n");
	}
	void deposit(float amount)
	{
		this.balance+=amount;
		System.out.println(+amount+ " is credited to your account\n");
	}
	void withdraw(float Amount)
	{
		if(this.balance==0)
			System.out.println("Your account balance is zero. You can't wthdraw money!!\n");
		else if(this.balance-Amount<0)
			System.out.println("Insufficient balance!!\n");
		else
		{
			this.balance-=Amount;
			System.out.println(+Amount+ " is debited from your account\n");
		}
	} 
}

class S3_15
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		Random rn=new Random();
		int account_no, ch1=1, ch2=1;
		String x;
		float deposit, withdraw;
		Saving objs=new Saving();
		Current objc=new Current();
		System.out.print("Which account you want to open Saving(S)/Current(C) : ");
		x=sc.next();
		char ch=x.charAt(0);
		if(ch=='S')
		{
			System.out.println("\n Saving Account");
			account_no=rn.nextInt(100000000);
			System.out.println("Your account number is : "+account_no);
			while(ch1!=4)
			{
				System.out.print("1.Check Balance   2.Deposit   3.Withdraw   4.Exit\n");
				System.out.print("Enter choice : ");	
				ch1=sc.nextInt();
				switch (ch1)
				{
					case 1: objs.checkBalance();
						    break;
					case 2: System.out.print("Enter amount you want to deposit : ");
						    deposit=sc.nextFloat();
						    objs.deposit(deposit);
						    break;
					case 3: System.out.print("Enter amount you want to withdraw : ");
						    withdraw=sc.nextFloat();
						    objs.withdraw(withdraw);
						    break;
					case 4:	break;
					default:System.out.println("Enter valid choice!!");
						    break;
				}
			}
		}
		else if(ch=='C')
		{
			System.out.println("\n Current Account ");
			account_no=rn.nextInt(100000000);
			System.out.println("Your account number is : "+account_no);
			while(ch2!=4)
			{
				System.out.print("1.Check Balance   2.Deposit   3.Withdraw   4.Exit\n");
				System.out.print("Enter choice : ");	
				ch2=sc.nextInt();
				switch (ch2)
				{
					case 1: objc.checkBalance();
					        break;
					case 2: System.out.print("Enter amount you want to deposit : ");
						    deposit=sc.nextFloat();
						    objc.deposit(deposit);
						    break;
					case 3: System.out.print("Enter amount you want to withdraw : ");
						    withdraw=sc.nextFloat();
						    objc.withdraw(withdraw);
						    break;
					case 4:	break;
					default:System.out.println("Enter valid choice!!");
						break;
				}
			}
		}
		else
			System.out.println("Enter valid character!!\n");
	}
}