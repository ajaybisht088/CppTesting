#include <iostream>
using namespace std;
class Account{
    int accountBalance = 0;
    public:
    string name {};
    int accountId;
    void accountHolderDetails(){
        cout<<"Customer Name = "<<name<<endl;
        cout<<"Customer Account Id = "<<accountId<<endl;
        cout<<"Custormer Account Balance = "<<accountBalance<<endl;
    }
    int getAccountStatement(){
        if(accountBalance < 10000){
            return accountBalance;
        }
        else return 0;
    }
    int deposit(int addAmount){
        accountBalance += addAmount;
        return 1;
    }
    int withdraw(int deductAmount){
        if(accountBalance >= deductAmount){
            accountBalance -= deductAmount;
            return 1;
        }
        else return 0;
    }
};
int main(){
    Account a1,a2,a3;
    a1.name = "Pankaj";
    a2.name = "Amit";
    a3.name = "Amreen";
    a1.accountId = 1;
    a2.accountId = 2;
    a3.accountId = 3;
    a1.accountHolderDetails();
    a2.accountHolderDetails();
    a3.accountHolderDetails();
    if(a1.deposit(20000)){
        cout<<"Successfully added Money"<<endl;
    }
    else cout<<"Problem in adding money"<<endl;
    a1.accountHolderDetails();
    a2.accountHolderDetails();
    a3.accountHolderDetails();
    if(a1.withdraw(10000)){
        cout<<"Successfully withdrawled Money"<<endl;
    }
    else cout<<"Problem withdrawing money"<<endl;
    a1.accountHolderDetails();
    a2.accountHolderDetails();
    a3.accountHolderDetails();
    return 0;
}