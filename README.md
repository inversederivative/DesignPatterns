# Design Patterns in C++

### Introduction:

This project is a collection of design patterns written in C++, which include the Test Driven
Development philosophy. With that in mind, I will attempt to update the project (i.e. push) 
continue to do more development. 

---

### Design Patterns

Design Patterns are reusable solutions to common problems that arise during software design and 
development. They are a set of well-established, general, and flexible guidelines or templates for 
solving specific design problems in a way that promotes code reusability, maintainability, and 
scalability. These patterns provide a shared vocabulary for software developers to communicate 
about common design challenges and their solutions.

The concept of Design Patterns was popularized by the book titled "Design Patterns: Elements of 
Reusable Object-Oriented Software," commonly referred to as the "Gang of Four" (GoF) book. The Gang 
of Four consists of four authors who are renowned figures in the field of software engineering and 
design:

    Erich Gamma
    Richard Helm
    Ralph Johnson
    John Vlissides

Published in 1994, this book introduced 23 classic design patterns that cover various aspects of 
software design, particularly in the context of object-oriented programming. These patterns were 
derived from their collective experiences in software development and served as a way to document 
and formalize solutions to recurring design problems.

The GoF book categorizes the 23 design patterns into three main categories:

    Creational Patterns: These patterns focus on object creation mechanisms, abstracting the instantiation process and making it more flexible and independent of the system. Examples include the Singleton, Factory Method, and Abstract Factory patterns.

    Structural Patterns: Structural patterns deal with object composition, providing ways to form larger, more complex objects from simpler ones while keeping the system flexible and easy to modify. Examples include the Adapter, Composite, and Proxy patterns.

    Behavioral Patterns: Behavioral patterns define how objects interact and communicate with each other. They help manage the responsibilities and collaboration between objects. Examples include the Observer, Strategy, and Command patterns.

Design Patterns provide several benefits:

    Reusability: By following established patterns, developers can reuse proven solutions to common problems in new projects, saving time and effort.

    Maintainability: Patterns help create well-structured and organized code, making it easier to maintain and extend.

    Scalability: Patterns promote flexibility and adaptability, allowing software to evolve and scale more effectively.

    Common Language: They establish a common vocabulary among developers, making it easier to communicate and understand design decisions.

    Best Practices: Patterns reflect best practices in software design and development, improving code quality and reliability.

Since the publication of the GoF book, many other design patterns have been identified and 
documented, and design patterns have become an integral part of the software development community. 
Developers regularly refer to these patterns to address various design challenges and create more 
robust and maintainable software systems.

---

### Singleton

**Intent:** Ensure a class has only one instance and provide a global point of access to that 
instance.

**Motivation:** To control access to a single, shared resource or coordinate actions across a 
system.

**Structure:**

    Private constructor to prevent external instantiation.
    Private static instance variable to hold the single instance.
    Public static method (usually named getInstance()) to get the instance.

**Usage:** Use the Singleton pattern when you need to guarantee a single instance of a class and 
ensure global access to it.

**Pros:** Ensures single instance, global access, and centralized control.

**Cons:** Can introduce global state and potential thread safety issues in multithreaded 
environments if not handled properly.

---

### Factory


**Intent:** Define an interface for creating an object, but let subclasses alter the type of 
objects that will be created. It falls under the creational design pattern category.

**Motivation:** To abstract and encapsulate the process of object creation, allowing clients to 
create objects without needing to know the specific class or constructor details.

**Structure:**

    An abstract Factory interface or class that declares a method for creating objects (often called create).
    Concrete Factory classes that implement the Factory interface and provide specific implementations of object creation.
    Concrete Product classes that represent the objects being created.

**Usage:** Use the Factory pattern when you want to centralize and abstract the process of object 
creation, promote loose coupling between clients and objects, and allow for easy extensibility and maintenance.

**Pros:** Encourages encapsulation, simplifies object creation, promotes code flexibility, and 
supports open-closed principle (classes are open for extension but closed for modification).

**Cons:** Can lead to a proliferation of factory classes in complex systems, and it might add 
complexity when there are only a few types of products to create.

---

### Abstract Factory

The abstract factory is much like the regular Factory Design Patter, however it's the factory for 
the factory. 

In my example, we have three different vehicle factories, the CarFactory, the MotorcycleFactory, 
and the BicycleFactory; all of which are instantiated by the AbstractFactory, or the factory of
factories.

---

