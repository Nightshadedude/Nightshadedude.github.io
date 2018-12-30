#include <iostream>
#include "bankAccount.h" 

using namespace std;

void displayMainMenu();

const int NUM_ACCOUNTS = 10;

int main() {
    int choice = 0;
    bool exitProgram = false;
    bankAccount bankAccountArray[NUM_ACCOUNTS];
    do{
        displayMainMenu();
        cin >> choice;
        cout << endl;
        switch(choice){
            case 1:{
                    bankAccount tempAccount;
                    tempAccount.setAll();
                    bankAccountArray[0] = tempAccount;
                }  
                break;
            case 2:
                //todo
                break;
            case 3:
                for(int i = 0; i < NUM_ACCOUNTS; i++){
                    bankAccountArray[i].displayAccountInfo();
                }
                break;
            case 9:
                exitProgram = true;
                break;
            default:
                cout << "Invalid Selection.  Please choose again." << endl;
                break;
        }
        displayMainMenu();
        cin >> choice;
        cout << endl;
    }while(!exitProgram);
    
    // Write your main here
    return 0;
}

void displayMainMenu() {
    cout << "1: Enter 1 to add a new customer." << endl;
    cout << "2: Enter 2 for an existing customer." << endl;
    cout << "3: Enter 3 to print customers data." << endl;
    cout << "9: Enter 9 to exit the program." << endl;
}
