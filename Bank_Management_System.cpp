#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

class Account{
   protected:
   int account_number;
   string account_holder_name;
   double balance;

   public:
   Account(int acc_num, string acc_holder_name, double bal):
   account_number(acc_num), account_holder_name(acc_holder_name),balance(bal) {}

   ~Account(){};
   
   void Create_Account(){
      cout<<"Enter your Account Number : ";
      cin>>account_number;
      cout<<"Enter your Name : ";
      cin>>account_holder_name;
      cout<<"Enter your Account Balance : ";
      cin>>balance;
   }

   void deposit(){
    double amount;
    cout<<"Enter how much money do you want to deposite : ";
    cin>>amount;
    balance += amount;
   }

   void withdraw(){
    double amount;
    withdraw:
    cout<<"Enter How much money do you want to withdraw : ";
    cin>>amount;
    if(amount<=balance){
        balance -= amount;
        cout<<"Withdrawl Successfull!";
    }
    else{
      char choice;
      cout<<"Invalid amount, do you want another withdrawl"<<endl;
      cin>>choice;
      if(toupper(choice) == 'Y' ){
         goto withdraw;
      }
      else{
         return;
      }

    }
   }

   void display_Account(){
    cout<<"Your account Number is : "<<account_number<<endl;
    cout<<"Account holder's Name is : "<<account_holder_name<<endl;
    cout<<"Your account balance is : "<<balance<<endl;
   }

   void view_balance(){
      cout<<"Your current balance is : "<< balance <<endl;
   }

   friend void transfer_funds(Account &account1, Account &account2);
};

void transfer_funds(Account &account1, Account &account2){
   double amount;
   transfer:
   cout<<"Enter the amount you want to transfer : ";
   cin>>amount;
   if(amount <= account1.balance){
      account1.balance -= amount;
      account2.balance += amount;
      cout<<"Transaction Successful!"<<endl;
   }

   else{
      cout<<"Invalid amount! Try Again"<<endl;
      char choice;
      cout<<"Do you want another transfer? (y/n)"<<endl;
      cin>>choice;
      if(toupper(choice) == 'Y' ){
         goto transfer;
      }
      else{
         return;
      }
   }

}


int main(){
   system("cls");
   Account a1(1122, "Arman Wali", 1000.0);
   Account a2(3344, "Sinan Khan", 2000.0);
   
   cout<<"\n$$$$$-----Welcome to Bank Management System-----$$$$$"<<endl<<endl;
   cout;
   cout<<"  1.Create Account                  2.Deposite"<<endl;
   cout<<"  3.Withdraw Amount                 4.Display Account details"<<endl;
   cout<<"  5.View Balance                    6.Transfer funds"<<endl; 
   
   int choice;
   
}
