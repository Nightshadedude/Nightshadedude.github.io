/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */
#include <iostream>
#include "SavingsAccount.h"

using namespace std;

double SavingsAccount::annualInterestRate = .02;

int main (){
    SavingsAccount Firstsaver(1000.00);
    SavingsAccount Secondsaver(2000.00);
    
    Firstsaver.calculateMonthlyInterest();
    Secondsaver.calculateMonthlyInterest();

    SavingsAccount::modifyInterestRate(.03);
    
    Firstsaver.calculateMonthlyInterest();
    Secondsaver.calculateMonthlyInterest();
    
    return 0;
}
