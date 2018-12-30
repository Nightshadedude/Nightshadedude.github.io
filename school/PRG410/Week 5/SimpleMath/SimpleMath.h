/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */
 
#ifndef SIMPLEMATH_H_
#define SIMPLEMATH_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

static const string catNameArr[6] = {
    "Clothing",
    "Beauty products",
    "Grocery",
    "Gardening",
    "School supplies",
    "Tobacco products",
};

class SimpleMath{
private:
    int catNumber;
    string catName;
    double taxPct;
    double netCost;
    double grossCost;

public:
    SimpleMath();
    ~SimpleMath();
    
    void setCatNumber(int);
    void setTaxPct(double);
    void setNetCost(double);
    void setGrossCost(double);
    void setCatName(string);
    int getCatNumber();
    double getTaxPct();
    double getNetCost();
    double getGrossCost();

    void displayPrompt();
    void calcTaxPct(int);
    void calcGrossCost();
    void displayGrossCost();
};

#endif /*SIMPLEMATH_H_*/