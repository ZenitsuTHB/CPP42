<div align="center">
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" height="30" alt="cplusplus logo" />
</div>

###

This Repo is all about Initiation to  c++ XD


### CPP_05

#### ex00 

This exercice is an initiation to (Exceptions), what are Exceptions ?

In C++, an exception is a runtime error that occurs during the execution of a program. If not handled, it stops the program execution.

Exemples :
```
try {
   // Code that might throw an exception
   throw exception_object;
}
catch (exception_type e) {
   //catch the exception thrown from try block and handle it
}
```
- https://cplusplus.com/doc/tutorial/exceptions/
- https://www.codecademy.com/resources/docs/cpp/exceptions
- https://www.geeksforgeeks.org/how-to-throw-and-catch-exceptions-in-cpp/

###
#### Subject requierements  
A class name `Bureaucrat`  :
- A constant name.
- A grade from 1 (highest grade) to 150 (lowest posible grade).
- getName() and getGrade().
- Member functions to ``Increment`` and ``Decrement`` grade.

Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
 * Bureaucrat::GradeTooHighException or a
   Bureaucrat TooHigh("Name", 0);
 * Bureaucrat::GradeTooLowException.
   Bureaucrat TooLow("Name", 151);

An overload of the insertion («) operator to print something like :

  ``<name>, bureaucrat grade <grade>.``
###

<div align="center" width="20">
    <p>Pseudo-code</p>
    <img src="https://github.com/ZenitsuTHB/CPP42/blob/main/mod05/workfl0500.png" width="800" height="850" alt="cpp workflow"/>
</div>

###
