#include <Singleton.hpp>

// Initialize the instance pointer
Singleton* Singleton::instancePtr = nullptr;

Singleton* Singleton::getInstance() {
    // If there is no instance of class
    // then we can create an instance.
    if (instancePtr == nullptr)
    {
        // We can access private members
        // within the class.
        instancePtr = new Singleton();

        // returning the instance pointer
        return instancePtr;
    }
    else
    {
        // if instancePtr != NULL that means
        // the class already have an instance.
        // So, we are returning that instance
        // and not creating new one.
        return instancePtr;
    }
}

void Singleton::setName(std::string myName)
{
    name = myName;
}

std::string Singleton::getName() const
{
    return name;
}

int Singleton::getData() const
{
    return data;
}

void Singleton::setData(int myData)
{
    data = myData;
}
