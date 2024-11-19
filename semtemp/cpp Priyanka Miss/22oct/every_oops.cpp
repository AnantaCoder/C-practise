#include <bits/stdc++.h>
#include <string>
using namespace std;
// Abstract Base Class (Demonstrates Abstraction)
class AnimaL
{
protected:
    string name;
    int age;

public:
    AnimaL(string name, int age) : name(name), age(age) {}

    virtual void makesound() const = 0;

    // getter and setter fuinction
    string getname() const
    {
        return name;
    }
    void setname(string newname)
    {
        name = newname;
    }

    int getage() const { return age; }
    void setage(int newage) { age = newage; }
};
// Derived Class (Inheritance)

class Dog : public AnimaL
{
public:
    Dog(string name, int age) : AnimaL(name, age) {}

    void makesound() const override
    {
        cout << name << "Woof Woof" << endl; // over write the pure virtual function form animal
    }

    void fetch() const
    {
        cout << name << "Playing with a ball"; // additionalk functionality
    }
};

class Cat : public Dog
{
    public:
    Cat(string name, int age) : Dog(name, age) {}
    void makesound() const override
    {
        cout << name << "Meow" << endl; // over write the pure virtual function form animal
    }

    void pur() const
    {
        cout << name << "Is a gay"; // additionalk functionality
    }
};
int main()
{

    Dog dog("biju",74);
    dog.makesound();

    dog.setage(40);
    cout<<dog.getage()<<endl;
    dog.fetch();
    
    Cat cat("Whiskers", 2);
    cat.makesound();
    cat.pur();
    cout << "Cat's age: " << cat.getage() << endl;

    //polymorphism pointer to call derived class methods .


    Dog* animal1 = &dog;
    animal1->makesound();
    animal1->setage(50);
    cout<<animal1->getage()<<endl;
    //animal1->fetch(); // error: 'fetch' is not a member of 'Animal
    //animal1->pur(); // error: 'pur' is not a member of 'Animal




    return 0;
}


/*
    
* Encapsulation: The Animal class uses private members name and age, accessible only through public getter and setter methods.
* Inheritance: Dog and Cat are derived classes of Animal. They inherit the properties and behaviors of Animal.
* Polymorphism: The makeSound function is a virtual function, and each derived class overrides it to provide specific behavior.
* Abstraction: Animal is an abstract class with a pure virtual function makeSound, which must be implemented by derived classes (Dog and Cat).

*/