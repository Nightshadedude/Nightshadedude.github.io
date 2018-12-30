/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */
 
#include "numComp.h"
#include <iostream>

const int NUM_OF_REQUESTS = 3;

using namespace std;

//default constuctor

/*numComp::numComp() {
    int intArray[NUM_OF_REQUESTS] = {};
}*/

numComp::numComp() {
    for(int i = 0; i < NUM_OF_REQUESTS; i++) {
        this->intArray[i] = promptInput(i);
    }
}

numComp::~numComp() {
    //destructor stub
}

//loop to collect input and return each for collection in the array
int numComp::promptInput(int num){
    cout << "Please enter number " << num + 1 <<": ";
    cin >> num;
    cout << endl;
    return num;
}

//loops through the array to find the largest number
int numComp::findLargest(){
    int largest = -32767; //this is to start at the absolute minimum of int if negative numbers are compared
    for(int i = 0; i < NUM_OF_REQUESTS; i++){
        if(intArray[i]>largest){
            largest = intArray[i];
        }
    }
    return largest;
}

//loops through the array to find the smallest number
int numComp::findSmallest(){
    int smallest = 32767; //this is to start at the absolute max of int if very large numbers are compared
    for(int i = 0; i < NUM_OF_REQUESTS; i++){
        if(intArray[i] < smallest){
            smallest = intArray[i];
        }
    }
    return smallest;
}

//uses a boolean that gets flipped if all of the numbers in the array are not equal
void numComp::equalityCheck(){
    //for simplicity, the equality check assumes 2+ numbers.  only one check will cause an out of array range error
    bool equal = true;
    for(int i = 1; i < NUM_OF_REQUESTS; i++){
        if(intArray[i-1] != intArray[i]){
            equal = false;
        }
    }
    
    if(equal){
        cout << "These numbers are equal." << endl;
    }
    else{
        cout << "These numbers are not equal." << endl;
    }
}

//add up all the numbers in the array
int numComp::calculateSum(){
    int sum = 0;
    for(int i = 0; i < NUM_OF_REQUESTS; i++){
        sum += intArray[i];
    }
    return sum;
}

//multiplies all of the numbers in the array
int numComp::calculateProd(){
    int product = 1; // 1 to have a starting place that doesn't affect the result
    for(int i = 0; i < NUM_OF_REQUESTS; i++){
        product *= intArray[i];
    }
    return product;
}

//average of all of the numbers
double numComp::calculateAvg() {
    double avg = 0;
    int sum = calculateSum();
    avg = sum/(NUM_OF_REQUESTS*1.0);
    return avg;
}

//outputs all of the required pieces for the assignment
void numComp::outputAll() {
    cout << "The largest number is: " << findLargest() << endl;
    cout << "The smallest number is: " << findSmallest() << endl;
    equalityCheck();
    cout << "The sum of all the numbers is: " << calculateSum() << endl;
    cout << "The product of all the numbers is: " << calculateProd() << endl;
    cout << "The average of all the numbers is: " << calculateAvg() << endl;
}