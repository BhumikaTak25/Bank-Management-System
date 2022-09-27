#include<iostream>
using namespace std;
class BankAccount
{
protected:
int account_no;
string name;
string address;
int password;
long contact_no[10];
char type_of_account='S'||'C'; //saving account and current account
int balance;
public:
void OpenAccount()
{
int age;
cout<<"\nEnter your age: ";
cin>>age;
if(age>16)
{
cout<<"\nEnter account number: ";
cin>>account_no;
cout<<"Enter name of depositor: ";
cin>>name;
cout<<"Enter address of depositor: ";
cin>>address;
cout<<"Enter type of account of depositor: ";
cin>>type_of_account;
cout<<"Enter amount: ";
cin>>balance;
cout<<"Enter your contact number: ";
cin>>contact_no[10];
cout<<"Enter your password: "; //password should be in numbers
cin>>password;
}
else
{
    {
        cout<<"Sorry, you are not old enough to open a bank account!"<<endl;
    }
}
}
void print_details()
{
cout<<"\nAccount number: "<<account_no<<endl;
cout<<"Name of depositor: "<<name<<endl;
cout<<"Address of depositor: "<<address<<endl;
cout<<"Contact number of depositor: "<<contact_no<<endl;
cout<<"Type of account of depositor: "<<type_of_account<<endl;
cout<<"Total balance in account: "<<balance<<endl;
}
void Deposit()
{
int add_amount;
cout<<"\nBalance in your account: "<<balance<<endl;
cout<<"Enter how much amount you want to deposit: ";
cin>>add_amount;
balance=add_amount+balance;
cout<<"\nTotal balance in your account is: "<<balance<<endl;
}
void Withdrawal()
{
int remove_amount;
cout<<"\nBalance in your account is: "<<balance<<endl;
cout<<"Enter how much amount you want to withdraw: ";
cin>>remove_amount;
if(remove_amount<=balance)
{
balance=balance-remove_amount;
}
else
{
cout<<"Less Balance"<<endl;
}
cout<<"\nTotal balance in your account is: "<<balance<<endl;
}
void ChangeAddress()
{
cout<<"\nYour present address is: "<<address<<endl;
cout<<"Enter your new address: ";
cin>>address;
cout<<"\nYour address is changed and your new address is: "<<address<<endl;
}
void ChangePhoneNumber()
{
cout<<"\nYour present contact no. is: "<<contact_no[10]<<endl;
cout<<"Enter your new contact no. : ";
cin>>contact_no[10];
cout<<"\nYour contact number is changed and your new contact number is:"<<contact_no[10]<<endl;
}
void Loan()
{
char loan_type='C'||'H'||'G'||'W';
double loan_amount, loan_time,total_amount,monthly_amount;
cout<<"\nEnter which type of loan do you want"<<endl;
cout<<"\n1.Car Loan(for car loan enter C)\n2.Home Loan(for home loan enter H)\n3.GoldLoan(for gold loan enter G)\n4.Wedding Loan(for wedding loan enter W)"<<endl;
cin>>loan_type;
if(loan_type=='C')
{
cout<<"\nWe can provide you car loan from max to max 10 lakh rupees"<<endl;
cout<<"Enter amount: ";
cin>>loan_amount;
cout<<"For how years months do you need loan: ";
cin>>loan_time;
cout<<"For car loan interest is 8% per month"<<endl;
total_amount=(loan_time*loan_amount)+(loan_time*loan_amount*(8/100.00));
monthly_amount=total_amount/(loan_time*12);
cout<<"\nTotal amount to be paid: "<<total_amount<<endl;
cout<<"\nTotal interest: "<<total_amount-(loan_time*loan_amount)<<endl;
cout<<"\nMonthly amount to be paid: "<<monthly_amount<<endl;
}
else if(loan_type=='H')
{
cout<<"\nWe can provide you home loan from max to max 20 lakh rupees"<<endl;
cout<<"Enter amount: ";
cin>>loan_amount;
cout<<"For how many years do you need loan: ";
cin>>loan_time;
cout<<"For home loan interest is 10% per month"<<endl;
total_amount=(loan_time*loan_amount)+(loan_time*loan_amount*(10/100.00));
monthly_amount=total_amount/(loan_time*12);
cout<<"\nTotal amount to be paid: "<<total_amount<<endl;
cout<<"\nTotal interest: "<<total_amount-(loan_time*loan_amount)<<endl;
cout<<"\nMonthly amount to be paid: "<<monthly_amount<<endl;
}
else if(loan_type=='G')
{
cout<<"\nWe can provide you gold loan from max to max 8 lakh rupees"<<endl;
cout<<"Enter amount: ";
cin>>loan_amount;
cout<<"For how many years do you need loan: ";
cin>>loan_time;
cout<<"For gold loan interest is 9% per month"<<endl;
total_amount=(loan_time*loan_amount)+(loan_time*loan_amount*(9/100.00));
monthly_amount=total_amount/(loan_time*12);
cout<<"\nTotal amount to be paid: "<<total_amount<<endl;
cout<<"\nTotal interest: "<<total_amount-(loan_time*loan_amount)<<endl;
cout<<"\nMonthly amount to be paid: "<<monthly_amount<<endl;
}
else if(loan_type=='W')
{
cout<<"\nWe can provide you wedding loan from max to max 5 lakh rupees"<<endl;
cout<<"Enter amount: ";
cin>>loan_amount;
cout<<"For how many years do you need loan: ";
cin>>loan_time;
cout<<"For wedding loan interest is 12% per month"<<endl;
total_amount=(loan_time*loan_amount)+(loan_time*loan_amount*(12/100.00));
monthly_amount=total_amount/(loan_time*12);
cout<<"\nTotal amount to be paid: "<<total_amount<<endl;
cout<<"\nTotal interest: "<<total_amount-(loan_time*loan_amount)<<endl;
cout<<"\nMonthly amount to be paid: "<<monthly_amount<<endl;
}
else
{
cout<<"Please Enter a valid choice"<<endl;
}
}
int Search(int,int);
};
int BankAccount::Search(int a,int p)
{
if(account_no==a && password==p)
{
print_details();
return (1);
}
return 0;
}
int main()
{
int ch,a,found=0,p;
BankAccount b[100];
int number,i;
cout<<"Enter no. of depositors: ";
cin>>number;
for(i=0;i<number;i++)
{
b[i].OpenAccount();
}
do
{
cout<<"\n\n MENU \n\n"<<endl;
cout<<"\n1.Show Details"<<endl;
cout<<"2.Deposit Amount"<<endl;
cout<<"3.Withdraw Amount"<<endl;
cout<<"4.Change Address"<<endl;
cout<<"5.Change Contact Number"<<endl;
cout<<"6.Loan"<<endl;
cout<<"\nPlease enter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter your account number: ";
cin>>a;
cout<<"Enter your password: ";
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
break;
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
case 2:
cout<<"Enter your account number: "<<endl;
cin>>a;
cout<<"Enter your password: "<<endl;
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
{
b[i].Deposit();
break;
}
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
case 3:
cout<<"Enter your account number: "<<endl;
cin>>a;
cout<<"Enter your password: "<<endl;
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
{
b[i].Withdrawal();
break;
}
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
case 4:
cout<<"Enter your account number: "<<endl;
cin>>a;
cout<<"Enter your password: "<<endl;
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
{
b[i].ChangeAddress();
break;
}
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
case 5:
cout<<"Enter your account number: "<<endl;
cin>>a;
cout<<"Enter your password: "<<endl;
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
{
b[i].ChangePhoneNumber();
break;
}
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
case 6:
cout<<"Enter your account number: "<<endl;
cin>>a;
cout<<"Enter your password: "<<endl;
cin>>p;
for(i=0;i<=number;i++)
{
found=b[i].Search(a,p);
if(found)
{
b[i].Loan();
break;
}
}
if(!found)
cout<<"Account no. or password is invalid"<<endl;
break;
default:
cout<<"Wrong Choice"<<endl;
}
}
while(ch!=7);
return 0;
}
