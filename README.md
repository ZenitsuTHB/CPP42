<div align="center">
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" height="30" alt="cplusplus logo" />
</div>

###

This Repo is all about Initiation to  c++ XD

<div>
   
## CPP_05

#### ex00   Mommy, when I grow up, I want to be a bureaucrat! 

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
    <p>Flow Chart_00</p>
    <img src="https://github.com/ZenitsuTHB/CPP42/blob/main/mod05/workfl0500.png" width="300" height="100" alt="cpp workflow"/>
</div>

#### ex01    Form up, maggots!

This exercise is about filling forms by signing them, if the :  

- Form has to be signed
- Bureaucrat has the correct grade

<ins>_RECIPE_</ins>
- A _FORM_ class
   - A const ```Name```
   - A ```bolean``` indicating status (signed || !signed)
   - A const ```grade``` required to be able to sign a form
   - A const ```grade``` required to be able to execute it
grade follows the same rules that apply to the Bureaucrat.

- [x] Incorrect grades will throw : Form::GradeTooHighException or Form::GradeTooLowException
- [x] Getters for all atrubutes
- [x] Overload insertion operator (<<) to print out the Fom's informations.
- [x] A beSigned(Bureaucrat parameter) member funtion, that changes the form status to _signed_ if :
   - Bureaucrat _grade_ is high enough; means >= the required grade
- [x] A signForm() member function to Bureaucrat, if the form got signed it prints :
  ``<bureaucrat> signed <form>`` or
   ``<bureaucrat> couldn’t sign <form> because <reason>``
Note : to be able to use Form Class inside of Bureaucrat Class and vice versa we use what is called :  _```Forwarded Declaration```_

Explaination here : https://www.geeksforgeeks.org/what-are-forward-declarations-in-c/
<div align="center" width="20">
    <p>Flow Chart_01</p>
    <img src="https://github.com/ZenitsuTHB/CPP42/blob/main/mod05/workfl0501.png" width="300" height="100" alt="cpp workflow"/>
</div>
 
###
Note :
###
In C++98, the best practice is to define the ```Exceptions``` as classes, not ```methods```, and make them inherit from **std::exception**
</div>

###
