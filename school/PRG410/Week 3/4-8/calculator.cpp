#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void addInts(int a, int b){
    cout <<  (a + b) << endl;
}

void subInts(int a, int b){
    cout << (a - b) << endl;
}

void multInts(int a, int b){
    cout << (a * b) << endl;
}

void divInts(int a, int b){
    if(b == 0){
        cout << "error" << endl;
    }
    else{
        cout << (a / b);
    }
}

int main() {
    char input[50];
    char equation[50];
    char* a;
    char* b;
    char* delimiter;
    char derefDel;
    char plus = '+';
    char minus = '-';
    char mult = '*';
    char div = '/';
    int aInt;
    int bInt;
    cin.getline(input,sizeof(input));
    cout << input;
    a = strtok(input, " ");
    delimiter = strtok(NULL, " ");
    b = strtok(NULL, " ");
    aInt = atoi(a);
    bInt = atoi(b);
    derefDel = delimiter[0];
    cout << equation << " = ";
    if(derefDel == plus){
        addInts(aInt,bInt);
    }
    else if(derefDel == minus){
        subInts(aInt,bInt);
    }
    else if(derefDel == mult){
        multInts(aInt,bInt);
    }
    else if(derefDel == div){
        divInts(aInt,bInt);
    }
    return 0;
}