#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double periodPaymentAmount(double, double, double);
double periodInterest(double, int);
void amortizationSchedule(double, double, double, int);

int main() {
    int numYears, n;
    double interest, principal, periodPayment, r;
    
    cout << "Number of years: ";
    cin >> numYears;
    cout << endl << "Interest APY (e.g. 0.06, not 6%): ";
    cin >> interest;
    cout << endl << "Principal (e.g. 10000.00): ";
    cin >> principal;
    
    n = numYears*12;
    
    cout << "n: " << n << endl;
    
    r = interest/12;

    cout << "r: " << r << endl;
    
    periodPayment = periodPaymentAmount(principal, r, n);

    cout << "pmt: " << periodPayment << endl;

    
    amortizationSchedule(principal, periodPayment, r, n);

    return 0;
}


//P(p) = principal
//r = interest rate per period
//n = total number of payments/periods
//e.g. principal = $10000.00
//rate = 0.005 (6% over 12 months)
//payments = 60 (5 years)
//A(paymentPeriodAmount) = $193.33
double periodPaymentAmount(double p, double r, double n){
    double A, numerator, denominator;
    
    numerator = r * pow((1.0+r), n);
    denominator = pow((1.0+r),n) - 1.0;
    
    A = p * numerator / denominator;
    
    return A;
}

double periodInterest(double i, int numPeriod){
    return i / (numPeriod * 1.0); 
}

void amortizationSchedule(double principal, double periodPayment, double interest, int numPeriod){
    double perInt = 0;
    double perPrincipal = 0;
    
    cout << "Payment | Amount | Interest | Principal | Balance" << endl; 
    for(int i = 0; i < numPeriod; i++){
        cout << setw(6) << i+1 << "  |";
        cout << setw(7) << fixed << setprecision(2) << periodPayment << " |";

        perInt = principal * interest;
        cout << setw(9) << perInt << " |";

        perPrincipal = periodPayment - perInt;
        cout << setw(10) << perPrincipal << " |";
        
        principal -= perPrincipal;
        cout << setw(9) << principal << endl;
    }
}