#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct StudentRecordType
{
    int age;
    string firstName;
    string lastName;
    
};

int main() {
    
    vector<StudentRecordType> sr;
    for(int i = 0; i < 10; i++){
        sr.push_back(StudentRecordType());
        
        sr[i].age = 23;
        sr[i].firstName = "Jon";
        sr[i].lastName = "Jensen";
    }
    
    for(int i = 0; i < sr.size(); i++){
        cout << sr[i].age << ":"
        << sr[i].firstName << ":"
        << sr[i].lastName << endl;
    }
    return 0;
}
