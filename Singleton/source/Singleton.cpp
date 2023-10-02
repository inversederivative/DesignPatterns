#include <Singleton.hpp>

// Initialize the instance pointer
Singleton* Singleton::instancePtr = NULL;

Singleton* Singleton::getInstance() {
    // If there is no instance of class
    // then we can create an instance.
    if (instancePtr == NULL)
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
