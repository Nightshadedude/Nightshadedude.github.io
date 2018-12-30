/*
 *
 *      Author: Eric Landeis
 *       Class: PRG410
 *
 */

#ifndef NUMCOMP_H_
#define NUMCOMP_H_

class numComp{
private:
    int* intArray;

public:
    numComp();
    ~numComp();
    
    int promptInput(int);
    int findLargest();
    int findSmallest();
    void equalityCheck();
    int calculateSum();
    int calculateProd();
    double calculateAvg();
    void outputAll();
};

#endif /*NUMCOMP_H_*/