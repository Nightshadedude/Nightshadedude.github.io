/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

class SavingsAccount{
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingsAccount(double);
    ~SavingsAccount();
    
    void calculateMonthlyInterest();
    static void modifyInterestRate(double);
};

#endif /*SAVINGSACCOUNT_H_*/