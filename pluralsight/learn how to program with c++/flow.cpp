#include <iostream>
using namespace std;

int main()
{
    int i;
    in j;
    cout << "Enter a number";
    cin >> i;
    cout << "You entered " << i << ".  Enter another number: ";
    cin >> j;
    
    if(i<j)
    {
        cout << "The first number, " << i << "is less than the second number, "
        << j << ".";
    }
    else
    {
        cout << "The first number, " << i << "is greather than or equal to the second number, "
        << j << ".";
    }
	return 0;
}