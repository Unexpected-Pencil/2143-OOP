 ## A04

- Name: Jacob Lawler
- Date: 6 Dec 2024
- Class: 2143 OOP
  
###### This page only contains the definitions for the terms. Images and code snippets are included in the full wiki page.
## Definitions

#### Abstract Classes and Interfaces
> Abstract classes and interfaces are both used in object-oriented programming (OOP) to create maintainable code. They are both abstraction mechanisms that help separate components and define contracts for classes. Abstract Classes are classes with atleast one virtual method whereas a abstract interface is a class with only virtual methods.
#### Abstraction 
>  The process of hiding complex details and only showing the necessary features of an object. This makes it easier to interact with objects, which can make programming more efficient and intuitive. 
#### Access Modifiers (Public, Private, Protected)
> Access modifiers are keywords in object-oriented programming languages that control the accessibility of classes, methods, and other members. They are part of the syntax of a programming language and are used to help encapsulate components.
>>
>>  A public access modifier allows access to a class, method, or variable from any other class in an application, regardless of the package. 
>>
>> A private access modifier is a type of access control that limits access to a member of a class to only within that class or by friend classes. 
>>
>> A protected access modifier is a way to control access to a class's members, allowing them to be accessed by subclasses or friend classes.
#### Attributes/Properties
> Attributes or properties in object-oriented programming are defined for classes and objects such as a data element representing the quality or state of the class or object. Attributes are typically 
#### Class
>  A class is a user-defined data type that acts as a blueprint for objects, attributes, and methods.
#### Class Variables
> In class-based, object-oriented programming, a class variable is a variable defined in a class of which a single copy exists, regardless of how many instances of the class exist. 
#### Collections and Iterators 
> In computer programming, a collection is a group of objects.
> An iterator is an object that allows access to each object of a collection.
#### Constructors
> A constructor is a function in object-oriented programming that prepares a new object for use. Constructors are automatically called when an object is created, and they assign values to the object's members.
#### Destructors 
> A destructor is a member function that is automatically called when an object is destroyed or goes out of scope. Destructors are used to deallocate memory and perform other cleanup tasks for a class object and its members.
#### Design Patterns (e.g., Singleton, Factory, Observer)
> Design patterns are like well-known recipes for common problems in software development. They're not step-by-step instructions, but more like guidelines to help you solve these problems in a flexible and efficient way. These patterns gather the wisdom of the software development community, making it easier for developers to work together and create software that's easy to maintain, adapt, and reuse.
>> The Singleton Method Design Pattern ensures a class has only one instance and provides a global access point to it. It’s ideal for scenarios requiring centralized control, like managing database connections or configuration settings.
>>
>> The Factory Method pattern is a creational design pattern that provides an interface for creating objects in a superclass but allows subclasses to alter the type of objects that will be created. It encapsulates the object creation logic, decoupling it from the client code that uses the objects.
>>
>> It is often used for implementing distributed event-handling systems in event-driven software. In such systems, the subject is usually named a "stream of events" or "stream source of events" while the observers are called "sinks of events." The stream nomenclature alludes to a physical setup in which the observers are physically separated and have no control over the emitted events from the subject/stream source. This pattern thus suits any process by which data arrives from some input that is not available to the CPU at startup, but instead may arrive at arbitrary or indeterminate times (HTTP requests, GPIO data, user input from peripherals and distributed databases, etc.).
#### Diamond Problem
> An ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C. If there is a method in A that B and C have overridden, and D does not override it, then which version of the method does D inherit: that of B, or that of C?
#### Encapsulation 
> Encapsulation is a fundamental concept in object-oriented programming (OOP) that involves bundling data with the methods that operate on it. It's used to hide the values of a structured data object within a class, preventing unauthorized access. 
#### Exception Handling
> Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.
#### File I/O in OOP 
> In object-oriented programming (OOP), "File I/O" refers to the process of reading data from or writing data to a file on a computer using object-oriented techniques, where you typically create classes that encapsulate file operations like opening, reading, writing, and closing, allowing for a structured and reusable way to manage data interaction with files.
#### Friend Keyword
> In C++, the friend keyword is used to grant a function or another class access to the private and protected members of the class in which it is declared.
#### Generics
> The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 
#### Inheritance
> Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class to inherit properties and behaviors from another class. It's a way to create a hierarchy of classes that share attributes and methods, and it's based on a hierarchical relationship between classes. 
#### Instance Variable
> A instance variable, also known as an member variable or data member, is a variable that is declared within a class and is accessible by all methods of that class. Member variables are associated with a specific object and maintain their values for the lifetime of that object. 
#### Memory Management (Garbage Collection, Pointers)
>The process of defining and handling data associated with an object within a class, including attributes (member variables) and the methods (member functions) that operate on that data, ensuring proper encapsulation and access control to manage the object's state and behavior effectively.
>> Garbage collection is an automated process where the runtime environment identifies and reclaims memory occupied by objects that are no longer referenced by the program, essentially cleaning up unused object data to prevent memory leaks and optimize memory usage; it works by tracking object references and removing objects that have no active pointers pointing to them, allowing the memory to be reused for new objects. 
>>
>> A pointer is an object in programming languages that stores a memory address. Pointers are used to store the addresses of other variables or memory items. They are essential for dynamic memory allocation and are often used in parameter passing. 
#### Method
> A method is a procedure or behavior associated with an object. Methods are similar to functions, subroutines, or algorithms, and can include programming components like for loops and while loops. Methods can manipulate the attributes of an object.
#### Method Overloading 
> Method overloading is a type of polymorphism, which is the ability of objects or methods to behave differently depending on how they are used. In method overloading, methods are differentiated by the number and type of parameters passed to them.
#### Multiple Inheritance
> Multiple inheritance is a feature in some object-oriented programming languages that allows a class or object to inherit from more than one parent class or object. This is different from single inheritance, where a class or object can only inherit from one parent class or object.
#### Multithreading in OOP (time permitting)
> Multithreading is a programming concept that allows a single process to run multiple threads simultaneously. In object-oriented programming (OOP), multithreading can be used to create shared safe objects.
#### Objects 
> An object is a specific instance of a class that contains real values instead of variables.
#### Object Relationships (Association, Aggregation, Composition)
> Object relationships are a person's relationships with people, activities, or things that are sources of connection and gratification. In psychoanalysis, object relations theory is a popular model that focuses on how people's internalized childhood relationships influence their adult relationships.
>> An association in object-oriented programming (OOP) is a general relationship between two or more objects where they are connected in some way, but they do not have a strong dependency on each other
>> 
>> An aggregation is a special type of association in which objects are assembled or configured together to create a more complex object. An aggregation describes a group of objects and how you interact with them.
>> 
>> Composition is a "part-of" relationship where the parts cannot exist without the whole. It's also known as a "has-a" relationship.
#### OOP Design Principles
> The core design principles of OOP are encapsulation, inheritance, polymorphism, and abstraction.
#### Operator Overloading
> C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big integers, etc.
#### Overloading
> In C++, overloading refers to the ability to define multiple functions or operators with the same name, but with different parameters. The compiler then determines which function or operator to use based on the arguments provided in the function call.
#### Polymorphism
> Polymorphism is a concept in object-oriented programming that allows objects of a derived class to be treated as objects of a base class. This is often referred to as the third pillar of object-oriented programming. 
#### SOLID Principles 
> SOLID is an acronym for five design principles that developers use to create object-oriented software:
>> Single responsibility principle: A class should have only one reason to change.
>> 
>> Open-closed principle: Software entities should be open for extension but closed for modification.
>> 
>>Liskov substitution principle: Objects of subclasses should behave the same way as objects of their superclass. 
>>
>>Interface segregation principle: A principle for object-oriented design. 
>>
>>Dependency inversion principle: A principle for object-oriented design. 
#### Static Methods 
> A static method is a method that is associated with a class, rather than a specific instance of a class. This means that a static method can be called without creating an object of the class.
#### Static Variables
> A static variable is a variable in computer programming that is allocated for the entire duration of a program. Static variables are shared among all instances of a class, and are available to all methods.
#### Templates
> A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 
#### Test-Driven Development
> Test-driven development (TDD) is a software development technique that involves writing automated tests before writing production code. TDD is an iterative process that helps ensure code is thoroughly tested and reliable. 
#### UML Diagrams and Modeling
> Unified Modeling Language (UML) is a general-purpose modeling language. The main aim of UML is to define a standard way to visualize the way a system has been designed. It is quite similar to blueprints used in other fields of engineering. UML is not a programming language, it is rather a visual language.
#### Unit Testing
> Unit testing is a software development process that involves testing the smallest parts of an application to ensure they work as intended. It's a crucial part of software development and is considered a best practice.
#### Virtual
> The virtual keyword is used to modify a method, property, indexer, or event declaration so that it can be overridden in a derived class.
