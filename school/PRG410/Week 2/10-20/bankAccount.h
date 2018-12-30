#include <string>

using namespace std;

class bankAccount {
    public:
        static int nextAccountNum;
        bankAccount();
        void setName();
        void setAccountType();
        void setBalance();
        void setInterestRate();
        void setAll();
        void displayAccountInfo();

    private:
        int accountNum;
        string accountType;
        string name;
        double balance;
        double interestRate;
};
