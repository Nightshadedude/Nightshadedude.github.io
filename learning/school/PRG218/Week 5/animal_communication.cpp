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
    { cout << "Animal constructor executing.\n"; }

    // Destructor
    virtual ~Animal()
    {cout << "Animal destructor executing.\n"; }
    
    void communicate()
    {
        cout << "Speak" << endl;
    }
};

// The Dog class is derived from Animal
class Dog : public Animal
{
    public:
        // Constructor
        Dog() : Animal()
        { cout << "Dog constructor executing.\n"; }

        // Destructor
        ~Dog()
        { cout << "Dog destructor executing.\n"; }
        
        void communicate()
        {
            cout << "Woof!" << endl;
        }
};

// The Cat class is derived from Animal
class Cat : public Animal
{
    public:
        // Constructor
        Cat() : Animal()
        { cout << "Cat constructor executing.\n"; }

        // Destructor
        ~Cat()
        { cout << "Cat destructor executing.\n"; }
        
        void communicate()
        {
            cout << "Meow!" << endl;
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