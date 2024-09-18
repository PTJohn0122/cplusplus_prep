//
// Created by 郝行健 on 9/17/24.
// polymorphism means offspring class can have function works differently form parent class

#include <iostream>
#include <sstream>
using namespace std;

class Animal {
public:
    string name;
    bool have_spine;
    virtual void action() {
        cout << "do something" << endl;
    }

    virtual ~Animal() = default;
};

class Dog: public Animal {
public:
    void action() {
        cout << "Barking" << endl;
    }
};

class Cow: public Animal {
public:
    void action() {
        cout << "Mowing" << endl;
    }
};

int main() {
    Animal* animal;

    animal = new Dog();
    animal->action();
    delete animal;

    animal = new Cow();
    animal->action();

    delete animal;

    return 0;
}