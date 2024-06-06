#include <iostream>
using namespace std;

class Account{
   private:
   int account_number;
   string account_holder_name;
   double balance;

   public:
   Account(int acc_num, string acc_holder_name, double bal):
   account_number(acc_num), account_holder_name(acc_holder_name),balance(bal) {}
   
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
    double amount2;
    cout<<"Enter How much money do you want to withdraw : ";
    cin>>amount2;
    if(amount2<=balance){
        balance -= amount2;
        cout<<"Withdrawl Successfull!";
    }
    else{
        cout<<"Invalid amount, please Enter valid amount";
    }
   }

   void display_Account(){
    cout<<"Your account Number is : "<<account_number<<endl;
    cout<<"Account holder's Name is : "<<account_holder_name<<endl;
    cout<<"Your account balance is : "<<balance<<endl;
   }
};

int main(){

}
