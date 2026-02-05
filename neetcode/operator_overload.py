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
