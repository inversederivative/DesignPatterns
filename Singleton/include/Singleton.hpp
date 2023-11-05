//
// Created by John on 10/2/2023.
//
#include <iostream>
#include <memory>

#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

class Singleton {
private:
    std::string name;

    int data;

    static std::shared_ptr<Singleton> instancePtr;

    static void createInstance();

    Singleton() = default;

public:

    // deleting copy constructor and equals assignment operator
    Singleton(const Singleton &obj) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static std::shared_ptr<Singleton>getInstance();

    void setName(std::string myName);

    std::string getName() const;

    int getData() const;

    void setData(int myData);




};

#endif //DESIGNPATTERNS_SINGLETON_H

