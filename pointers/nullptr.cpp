//
// Created by 郝行健 on 9/17/24.
// functions are assigned to obj while compiling, even if it's nullptr. Since this function dosen't use 'this', it
// won't have segmentation fault
//
#include <iostream>
using namespace std;

class Car {
private:
    int year;
public:
    void drive() {
        cout << "The car is vrooming" << endl;
    }
    ~Car() = default;
};

int main() {
    Car *myCar = nullptr;
    myCar->drive();
    delete myCar;

    return 0;
}