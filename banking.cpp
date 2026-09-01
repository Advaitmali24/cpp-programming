#include <iostream>
using namespace std;

class bank
{
private:

     string name;
     int balance;
     void showbalance()
     {
        cout<<"Account holder"<<name<<endl;
        cout<<"Balance"<<balance<<endl;
     }

public:
    bank (string n, int b)
     {
        name = n;
        balance= b;
     }
    void deposit()
    {
        int amount;
        cout<<"Enter deposit amount:";
        cin>>amount;

        balance = balance +amount;
        cout<<"Amount deposited successfully"<<endl;
        cout<<"Into saving account"<<endl;
        showbalance();
    }
    void withdraw()
    {
        int amount;
        cout<<"Enter withdrawal amount:";
        cin>>amount;

        if (amount<=balance)
        {
            balance= balance-amount;
            cout<<"Amount withdrawn successfully"<<endl;

        }
        else
        {
            cout<<"insufficeint balance!"<<endl;
        }
        showbalance();
    }   
    class account
    {
    public:
        void accountType()
        {
            cout<<"Account type: Savings account"<<endl;        
        }

    };
};

int main()
{
    string name;
    int balance;
    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter initial balance: ";
    cin >> balance;

    bank b(name, balance);
    b.deposit();
    b.withdraw();
    bank::account a;
    a.accountType();

    return 0;
}




