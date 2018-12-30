#include <iostream>
#include <cmath>
#include "integerManipulation.h"

using namespace std;

integerManipulation::integerManipulation(){
    num = 0;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
    numLength = 0;
    int numArray[50];   
}

integerManipulation::integerManipulation(double n){
      //Constructor with a default parameter.
      //The instance variable num is set accordingto the parameter,
      //and other instance variables are set to zero.
      //The default value of num is 0;
      //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;   
    
    num = 0;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
    numLength = 0;
    int numArray[50];
    num = n;
}

void integerManipulation::setNum(double n){
      //Function to set num.
      //Postcondition: num = n;
      num = n;
}

double integerManipulation::getNum(){
      //Function to return num.
      //Postcondition: The value of num is returned.
      return num;
}

void integerManipulation::reverseNum(){
    //check if the number is negative to "save" the negative until the output
    int tempNum = num;
    bool negCheck = false;
    if(tempNum < 0){
        negCheck = true;
    }
    
    //set number to positive value
    tempNum = abs(tempNum);

    double reverse = 0;
    while (tempNum > 0){
        reverse *= 10; //add digit to reversed number
        reverse += tempNum % 10; // append remainder (last digit) of input
        tempNum /= 10; // remove the last digit of num (since it will be a fraction and be lost due to int)
    }
    
    if(negCheck){
        reverse = -reverse;
    }
    
    this->revNum = reverse;
}

void integerManipulation::classifyDigits(){
  //Function to count the even, odd, and zero digits of num.
  //Postcondition: evenCount = the number of even digits in num.
  //      oddCount = the number of odd digits in num.
    splitNumber();
    for(int i = 0; i < numLength; i++){
        if(numArray[i] == 0){
            zerosCount++;
        }
        else if(numArray[i]%2 == 0){
            evensCount++;
        }
        else{
            oddsCount++;
        }
    }
}

int integerManipulation::getEvensCount(){
      //Function to return the number of even digits in num.
      //Postcondition: The value of evensCount is returned.
    return evensCount;
}
    
int integerManipulation::getOddsCount(){
      //Function to return the number of odd digits in num.
      //Postcondition: The value of oddscount is returned.
    return oddsCount;
}

int integerManipulation::getZerosCount(){
      //Function to return the number of zeros in num.
      //Postcondition: The value of zerosCount is returned.
    return zerosCount;
}

int integerManipulation::sumDigits(){
      //Function to return the sum of the digits of num.
      //Postcondition: The sum of the digits is returned.
    int sum = 0;
    for(int i = 0; i < numLength; i++){
        sum += numArray[i];
    }
    return sum;
}
    
void integerManipulation::splitNumber(){
    if(num == 0){
        //do nothing
    }
    else{
        double split = num;

        int i = 0;
        while(split > 0){
            int rem = split % 10;
            numArray[i] = rem;
            split /= 10;
            i++;
        }
        numLength = i;
    }
}
