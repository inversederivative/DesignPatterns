//
// Created by John on 10/2/2023.
//
#include <iostream>

#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

class Singleton {
private:
    std::string name;

    int data;

    static Singleton *instancePtr;

    Singleton() = default;

public:

    // deleting copy constructor
    Singleton(const Singleton &obj) = delete;

    static Singleton *getInstance();

    void setName(std::string myName);

    std::string getName() const;

    int getData() const;

    void setData(int myData);



};

#endif //DESIGNPATTERNS_SINGLETON_H

