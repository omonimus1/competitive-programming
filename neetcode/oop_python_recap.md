Method overloading means having multiple methods with the same name but different parameters.
Python does not support traditional method overloading like Java or C++. Instead, it is achieved using:
Default arguments
*args and **kwargs

Method overriding occurs when a child class provides its own implementation of a method already defined in the parent class.
```
class Employee: def get_role(self): return "Employee" class Manager(Employee): def get_role(self): return "Manager"
```
## Encapsulation protects data by restricting direct access. Use of private (__) or protected (_) attribute
```
class Person:
    def __init__(self):
        # Private attributes
        self.__name = "Geeks"  # Private
        self.__age = 10         # Private

    # --------------------
    # PUBLIC methods
    # --------------------
    def get_name(self):
        """Public getter for name"""
        return self.__name

    def get_age(self):
        """Public getter for age"""
        return self.__age

    def set_name(self, name):
        """Public setter for name"""
        self.__name = name

    def set_age(self, age):
        """Public setter for age"""
        if self.__is_valid_age(age):  # Calls private method internally
            self.__age = age
            self.__log_change()       # Calls private method internally

    # --------------------
    # PROTECTED methods (convention: single underscore)
    # --------------------
    def _debug_info(self):
        """Protected method for internal debugging"""
        return f"Name: {self.__name}, Age: {self.__age}"

    # --------------------
    # PRIVATE methods (name-mangled, double underscore)
    # --------------------
    def __is_valid_age(self, age):
        """Private helper to validate age"""
        return age >= 0

    def __log_change(self):
        """Private helper to log changes"""
        print("Age updated")
```

# ABSTRACTION
from abc import ABC, abstractmethod
```
# Abstract class
class Shape(ABC):
    def __init__(self, color):
        self.color = color

    def get_color(self):
        return self.color

    @abstractmethod
    def get_area(self):
        pass

# Concrete class
class Square(Shape):
    def __init__(self, color, side):
        super().__init__(color)
        self.side = side

    def get_area(self):
        return self.side * self.side
```

## Encapsultation
```
class Person:
    def __init__(self):
        # Private attributes
        self.__name = "Geeks"  # Private
        self.__age = 10         # Private

    # --------------------
    # PUBLIC methods
    # --------------------
    def get_name(self):
        """Public getter for name"""
        return self.__name

    def get_age(self):
        """Public getter for age"""
        return self.__age

    def set_name(self, name):
        """Public setter for name"""
        self.__name = name

    def set_age(self, age):
        """Public setter for age"""
        if self.__is_valid_age(age):  # Calls private method internally
            self.__age = age
            self.__log_change()       # Calls private method internally

    # --------------------
    # PROTECTED methods (convention: single underscore)
    # --------------------
    def _debug_info(self):
        """Protected method for internal debugging"""
        return f"Name: {self.__name}, Age: {self.__age}"

    # --------------------
    # PRIVATE methods (name-mangled, double underscore)
    # --------------------
    def __is_valid_age(self, age):
        """Private helper to validate age"""
        return age >= 0
```
# Inheritance
```
class Employee:
    def __init__(self, id, salary):
        self.id = id
        self.salary = salary

class SalesEmployee(Employee):
    def __init__(self, id, salary, sales):
        super().__init__(id, salary)
        self.sales = sales
```

    def __log_change(self):
        """Private helper to log changes"""
        print("Age updated")


## Multiple inheritance
```
#User function Template for python3
# Implement Student, Faculty and PhdStudent classes here# Class for Student
class Student:
    def __init__(self, sid, deptid):
        self.sid = sid
        self.deptid = deptid

    def get_info(self):
        return f"StudentID:{self.sid} DepartmentID:{self.deptid}"


# Class for Faculty
class Faculty:
    def __init__(self, eid, deptid):
        self.eid = eid
        self.deptid = deptid

    def get_info(self):
        return f"EmployeeID:{self.eid} DepartmentID:{self.deptid}"


# Class for PhDStudent inheriting from both Student and Faculty
class PhDStudent(Student, Faculty):
    def __init__(self, sid, eid, deptid):
        Student.__init__(self, sid, deptid)
        Faculty.__init__(self, eid, deptid)

    def get_info(self):
        return f"StudentID:{self.sid} EmployeeID:{self.eid} DepartmentID:{self.deptid}"
```

## Abstraction
Abstraction hides implementation details and shows only essential behavior.
An abstract class defines what needs to be done,
a concrete class defines how it’s done.
```
from abc import ABC, abstractmethod

# Abstract class
class Shape(ABC):
    def __init__(self, color):
        self.color = color

    def get_color(self):
        return self.color

    @abstractmethod
    def get_area(self):
        pass

# Concrete class
class Square(Shape):
    def __init__(self, color, side):
        super().__init__(color)
        self.side = side

    def get_area(self):
        return self.side * self.side
```

## Poliformism

Polymorphism means one interface, multiple implementations.
The same method behaves differently depending on the object calling it.

Example in Python:
```
class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Bark"

class Cat(Animal):
    def speak(self):
        return "Meow"

animals = [Dog(), Cat()]

for animal in animals:
    print(animal.speak())
```
## Method overload:
```
# https://www.geeksforgeeks.org/problems/operator-overloading-in-python/1&selectedLang=python3

class ComplexNumber:
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    # Overload the + operator for adding two complex numbers
    def __add__(self, other):
        new_real = self.real + other.real
        new_imaginary = self.imaginary + other.imaginary
        return ComplexNumber(new_real, new_imaginary)

    # Overload the string representation of the object
    def __str__(self):
        return f"{self.real} + {self.imaginary}i"
```

## Method override:
```
#User function Template for python3
# Implement Employee and SalesEmployee class

class Employee:
    def __init__(self, id, salary):
        self.id = id
        self.salary = salary

    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary}"


class SalesEmployee(Employee):
    def __init__(self, id, salary, sales=0):
        super().__init__(id, salary)
        self.sales = sales

    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary} Sales:{self.sales}"
```
