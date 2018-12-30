#include <iostream>
#include <vector>

using namespace std;

struct simpleStruct{
    int baseNum;
    int doubleNum;
    int tripleNum;
};

int main() {
    
    vector<simpleStruct> iv;
    for(int i = 0; i < 10; i++){
        iv.push_back(simpleStruct());
        
        iv[i].baseNum = i;
        iv[i].doubleNum = i*2;
        iv[i].tripleNum = i*3;
    }
    
    for(int i = 0; i < iv.size(); i++){
        cout << iv[i].baseNum << ":"
        << iv[i].doubleNum << ":"
        << iv[i].tripleNum << endl;
    }
    return 0;
}
