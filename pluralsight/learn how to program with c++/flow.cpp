#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    bool keepgoing = true;
    int answer;
    while(keepgoing)
    {
        cout << "Enter a number: ";
        cin >> i;
        cout << "You entered " << i << ".  Enter another number: ";
        cin >> j;
        
        if(i<j)
        {
            cout << "The first number, " << i << " is less than the second number, "
            << j << "." << endl;
        }
        else if(i==j)
        {
            cout << "The first number, " << i << " is equal to the second number, "
            << j << "." << endl;
        }
        else
        {
            cout << "The first number, " << i << " is greater than the second number, "
            << j << "." << endl;  
        }
        
        cout << "Compare another? 0 for no: ";
        cin >> answer;
        if (answer == 0)
        {
            keepgoing = false;
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        cout << "For loop for no reason, iteration # " << i + 1 << endl;
    }
	return 0;
}