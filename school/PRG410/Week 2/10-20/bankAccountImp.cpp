#include <iostream>
#include <algorithm>
#include <string> 
#include <cctype>
#include "bankAccount.h"

using namespace std;

int bankAccount::nextAccountNum = 0;
    
bankAccount::bankAccount() {
        int accountNum = 0;
        string name = "";
        string accountType = "";
        double balance = 0;
        double interestRate = 0;
}

void bankAccount::setName(){
    cout << "Enter customer's name: ";
    cin >> name;
    this->name = name;
}

void bankAccount::setAccountType(){
    string checking = "checking";
    string savings = "savings";
    bool validAccountType = false;
    while(!validAccountType){
        cout << "Enter account type (checking/savings): ";
        cin >> accountType;
        std::transform(accountType.begin(), accountType.end(), accountType.begin(), ::tolower);
        cout << endl;
        if(accountType == checking){
            //todo
            validAccountType = true;
        }
        else if(accountType == savings) {
            //todo
            validAccountType = true;              
        }
        else{
            cout << "Invalid account type selected." << endl;
            validAccountType = false;
        }
    }
    this->accountType = accountType;
}

void bankAccount::setBalance(){
    double deposit;
    cout << "Enter amount to be deposited to open account: ";
    cin >> deposit;
    deposit = (deposit*1.0);
    this->balance = deposit;
}

void bankAccount::setInterestRate(){
    cout << "Enter interest rate (as a percent): ";
    cin >> interestRate;
}

void bankAccount::setAll(){
    this->accountNum = ++nextAccountNum;
    setName();
    setAccountType();
    setBalance();
    setInterestRate();
}

void bankAccount::displayAccountInfo(){
    cout << "Account Holder Name: " << name << endl;
    cout << "Account Type: " <<  accountType << endl;
    cout << "Account Number: " << accountNum << endl;
    cout << "Balance: " << balance << endl;
    cout << "Interest Rate: " << interestRate << "%" << endl;
    cout << "*****************************" << endl; 
}
