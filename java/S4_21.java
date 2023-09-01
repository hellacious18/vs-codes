abstract class Bank 
{
    double balance;
    Bank(double balance) 
    {
        this.balance = balance;
    }
    abstract void deposit(double amount);
}
class CurrentAccount extends Bank 
{
    CurrentAccount(double balance)    
    {
        super(balance);
    }
    void deposit(double amount) 
    {
        this.balance += amount;
    }
}
class LoanAccount extends Bank 
{
    double emi;

    LoanAccount(double balance, double emi) 
    {
        super(balance);
        this.emi = emi;
    }
    void deposit(double amount) 
    {
        this.balance -= emi;
    }
}
class SavingAccount extends Bank 
{
    SavingAccount(double balance) 
    {
        super(balance);
    }
    void deposit(double amount) 
    {
        double interest = amount * 0.08;
        this.balance += amount + interest;
    }
}
public class S4_21 
{
    public static void main(String[] args) 
    {
        CurrentAccount currentAccount = new CurrentAccount(1000);
        currentAccount.deposit(500);
        System.out.println("Current Account Balance: " + currentAccount.balance);

        LoanAccount loanAccount = new LoanAccount(10000, 1000);
        loanAccount.deposit(2000);
        System.out.println("Loan Account Balance: " + loanAccount.balance);

        SavingAccount savingAccount = new SavingAccount(5000);
        savingAccount.deposit(1000);
        System.out.println("Saving Account Balance: " + savingAccount.balance);
    }
}
