//
// Created by Alex T on 3/1/25.
//
#include <string>
using namespace std;

#ifndef DOG_H
#define DOG_H

class Dog {
public:
    string breed;
//    int age;
    string color;

    static void barking() {
        cout << "woof woof" << endl;
    }
    static void hungry() {
        cout << "feed me" << endl;
    }
    static void sleeping() {
        cout << "zzz" << endl;
    }

public:
    Dog();
};

Dog::Dog() {
    cout << "dog class constructor" << endl;
}

#endif //DOG_H
