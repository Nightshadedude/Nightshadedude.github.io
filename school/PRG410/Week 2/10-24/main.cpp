#include <iostream>
#include "integerManipulation.h"

using namespace std;

int main() {
    integerManipulation test;
    test.setNum(654167687964162741863);
    test.classifyDigits();
    cout << test.getNum() << endl;
    cout << test.getEvensCount() << endl;
    cout << test.getZerosCount() << endl;
    cout << test.getOddsCount() << endl;
    return 0;
}
