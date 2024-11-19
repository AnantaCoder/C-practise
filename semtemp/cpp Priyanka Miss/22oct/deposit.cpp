#include <bits/stdc++.h>
using namespace std;

class Account
{

private:
    int accno;
    int amount;

public:
    Account(int acno, int amt) : accno(acno), amount(amt) {}

    int deposite(int amt)
    {
        amount += amt;
        return amount;
    }
    int withdrawl(int money)
    {
        if (amount < money)
            cout << "Insufficient Balance , curr bal" << amount;
        else
            amount -= money;
        cout << "The current balance is " << amount << endl;
    }
    int getBalance() const
    {
        return amount;
    }
};

int main()
{

    Account acc(123409, 500);
    cout << acc.deposite(2000) << endl;
    cout << acc.withdrawl(500) << endl;
    cout << acc.withdrawl(500) << endl;
    cout << "Final Balance: " << acc.getBalance() << endl;

    return 0;
}