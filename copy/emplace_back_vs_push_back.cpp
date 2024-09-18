//
// Created by xjhao on 9/18/24.
//
#include <iostream>
#include <utility>
#include <sstream>
#include <vector>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string _name) {
        name = _name;
    }
    void self_introduction() {
        cout << "My name is " << name << endl;
    }
};

int main() {
    vector<Person> People;

    Person p1("Jake");
    Person p2("Alice");

    // Using push_back: moving an object with std::move
    People.push_back(p1);
    People.push_back(Person("Bob"));

    // Using emplace_back: constructing the object in place
    People.emplace_back(p2);
    People.emplace_back(Person("Claire"));

    for (auto& p : People) {
        p.self_introduction();
    }

    return 0;
}