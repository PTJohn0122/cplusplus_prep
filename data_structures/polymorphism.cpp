//
// Created by 郝行健 on 9/17/24.
// polymorphism means offspring class can have function works differently form parent class

#include <stdio.h>
#include <sstream>
using namespace std;

class Animal {
public:
    string name;
    bool have_spine;
    virtual void action() {
        cout << "do something" << endl;
    }
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

Animal* animal;
animal.action();

animal = new Dog();
animal.action();

animal = new Cat();
animal.action();