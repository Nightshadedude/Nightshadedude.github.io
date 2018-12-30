#include <iostream>

using namespace std;

int main () {
    int x = 1;
    int y = 0;
    int z = 0;
    try {
        z = x % y;
        cout << z << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}