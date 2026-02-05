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
