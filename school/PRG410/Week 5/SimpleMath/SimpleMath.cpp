/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */

#include "SimpleMath.h"

using namespace std;

SimpleMath::SimpleMath(){
    displayPrompt();
    calcGrossCost();
    //catNumber = choice;
}

SimpleMath::~SimpleMath(){
    //destructor stub
}

void SimpleMath::setCatNumber(int sCN){
    catNumber = sCN;
}

void SimpleMath::setCatName(string sCN){
    catName = sCN;
}

void SimpleMath::setTaxPct(double sTP){
    taxPct = sTP;
}

void SimpleMath::setNetCost(double sNC){
    netCost = sNC;
}

void SimpleMath::setGrossCost(double sGC){
    grossCost = sGC;
}

int SimpleMath::getCatNumber(){
    return catNumber;
}

double SimpleMath::getTaxPct(){
    return taxPct;
}

double SimpleMath::getNetCost(){
    return netCost;
}

double SimpleMath::getGrossCost(){
    return grossCost;
}

void SimpleMath::displayPrompt(){
    bool waiting = true;
    int choice;
    double cost;
    do{
        cout << "Please select one of the following categories:" << endl;
        for(int i = 0; i < 6; i++){
            cout << i+1 << ": " << catNameArr[i] << endl;
        }
        cout << "Choice: ";
        cin >> choice;
        if((choice >= 1) && (choice <= 6)){
            waiting = false;
            setCatNumber(choice);
        }
        else{
            cout << "Invalid input" << endl;
        }
    } while(waiting);
    
    waiting = false;
    
    do{
        cout <<  endl << "Enter a cost between $0.01 and $999999999.99: $";
        cin >> cost;
        
        if((cost >= 0.01) && (cost <= 999999999.99)){
            waiting = false;
            setNetCost(cost);
        }
        else{
            cout << "Invalid input" << endl;
        }
    } while(waiting);
    
    calcTaxPct(choice);
}

void SimpleMath::calcTaxPct(int choice){
    switch(choice){
        case 1:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.06);
            break;
        case 2:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.07);
            break;
        case 3:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.03);
            break;
        case 4:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.06);
            break;
        case 5:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.03);
            break;
        case 6:
            setCatName(catNameArr[choice-1]);
            setTaxPct(0.10);
            break;
        default:
            break;
    }
}

void SimpleMath::calcGrossCost(){
    double cost;
    cost = getNetCost() + (getTaxPct() * getNetCost());
    setGrossCost(cost);
}

void SimpleMath::displayGrossCost(){
    cout << endl << "Category: " << catName << endl <<
    "Cost: $" << fixed << setprecision(2) << getGrossCost() << endl;
}