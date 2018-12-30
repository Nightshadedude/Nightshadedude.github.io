#include <iostream>

using namespace std;

class cookieContainer{
private:
    int totalCookie;
    int cookieBox;
    int cookieContainer;
    int cookieSolo;
    const static int cSoloSize = 1;
    const static int cBoxSize = 24 * cSoloSize;
    const static int cContainerSize = 75 * cBoxSize;
public:
    void setTotalCookie(int);
    void containTheCookie();
    void displayTheCookie();
};

void cookieContainer::setTotalCookie(int tc){
    this->totalCookie = tc;
}

void cookieContainer::containTheCookie(){   
    int totalCookieSplit = totalCookie;
    cookieSolo = totalCookieSplit % cContainerSize;
    cookieContainer = (totalCookieSplit-cookieSolo)/cContainerSize;
    totalCookieSplit = cookieSolo;
    cookieSolo = totalCookieSplit % cBoxSize;
    cookieBox = (totalCookieSplit - cookieSolo)/cBoxSize;
}

void cookieContainer::displayTheCookie(){
    containTheCookie();
    cout << "Container(s): " << cookieContainer << endl;
    cout << "Box(es): " << cookieBox << endl;
    cout << "Single(s): " << cookieSolo << endl;
}

int main() {
    cookieContainer cc;
    cc.setTotalCookie(1825);
    cc.displayTheCookie();
    return 0;
}
