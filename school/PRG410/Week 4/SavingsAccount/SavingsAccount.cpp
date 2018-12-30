/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */
#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"


using namespace std;

SavingsAccount::SavingsAccount(double sb){
    savingsBalance = sb;
}

SavingsAccount::~SavingsAccount(){
    //destructor stub
}

void SavingsAccount::calculateMonthlyInterest(){
    savingsBalance += (savingsBalance*annualInterestRate)/12;
    
    cout << "Balance: " << fixed << setprecision(2)
        << savingsBalance << endl;
}

void SavingsAccount::modifyInterestRate(double ir){
    annualInterestRate = ir;
}
