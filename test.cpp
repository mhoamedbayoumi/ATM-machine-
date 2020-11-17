#include<string>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    int pin,choice;
    int balance=1000;
    int withdraw,diposit;
    cout<<"please enter your bin :";
    cin>>pin;
    do
    {
        cout<<"1:check account "<<endl;
        cout<<"2:withdraw cash "<<endl;
        cout<<"3:Deposit cash "<<endl;
        cout<<"4: Quit"<<endl;
    }while(false);
    cout<<"chose from menu \n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"your current balance is :$"<<balance<<endl;
        break;
    case 2:
        cout<<"enter the amount to withdraw"<<endl;
        cin>>withdraw;
        if(withdraw<balance)
        {
            balance=balance-withdraw;
            cout<<"your current balance is "<<balance<<endl;
        }
        else
            cout<<"you do not have this money "<<endl;
        break;
    case 3:
        {
            cout<<"please enter the amount "<<endl;
            cin>>diposit;
            balance+=diposit;
            cout<<"your current balance is :$"<<balance<<endl;
            break;
        }
    case 4:
        {
            cout<<"think you \n";
            break;
        }
    default:
        cout<<"this number is not exist please try again "<<endl;

    }
    return 0;
}

