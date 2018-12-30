/*
Eric Landeis
PRG218
Week 5
*/

#include <iostream>
using namespace std;

// Animal is a base class.
class Animal
{
    public:
    // Constructor
    Animal()
    { cout << "Animal constructor executing." << endl; }

    // Destructor
    virtual ~Animal()
    {cout << "Animal destructor executing." << endl; }
    
    void communicate()
    {
        cout << "\tSpeak" << endl;
    }
};

// The Dog class is derived from Animal
class Dog : public Animal
{
    public:
        // Constructor
        Dog() : Animal()
        { cout << "Dog constructor executing." << endl; }

        // Destructor
        ~Dog()
        { cout << "Dog destructor executing." << endl; }
        
        void communicate()
        {
            cout << "\tWoof!" << endl;
        }
};

// The Cat class is derived from Animal
class Cat : public Animal
{
    public:
        // Constructor
        Cat() : Animal()
        { cout << "Cat constructor executing." << endl; }

        // Destructor
        ~Cat()
        { cout << "Cat destructor executing." << endl; }
        
        void communicate()
        {
            cout << "\tMeow!" << endl;
        }
};

//*************************************************
// main function                                  *
//*************************************************

int main()
{
    Animal genericAnimal;
    genericAnimal.communicate();

    Dog ralph;
    ralph.communicate();
    
     //variable fluffy instead of myAnimal2 for instantiation of the Cat object
     //per the int main block step.
    Cat fluffy;
    fluffy.communicate();

    return 0;
}