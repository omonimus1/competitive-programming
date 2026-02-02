# https://leetcode.com/problems/print-in-order/
"""
Suppose we have a class:

public class Foo {
  public void first() { print("first"); }
  public void second() { print("second"); }
  public void third() { print("third"); }
}
The same instance of Foo will be passed to three different threads. 
Thread A will call first(), t
hread B will call second(), and thread C will call third(). 
Design a mechanism and modify the program to ensure that second() is executed after first(), and third() is executed after second().
"""
from threading import Event
from typing import Callable

# second() is executed after first(), and third() is executed after second().
class Foo:
    def __init__(self):
        self.first_done = Event()
        self.second_done = Event()

    def first(self, printFirst: 'Callable[[], None]') -> None:
        # printFirst() outputs "first". Do not change or remove this line.
        printFirst()
        self.first_done.set()  # Signal that first() has completed

    def second(self, printSecond: 'Callable[[], None]') -> None:
        self.first_done.wait()  # Wait for first() to complete
        # printSecond() outputs "second". Do not change or remove this line.
        printSecond()
        self.second_done.set()  # Signal that second() has completed

    def third(self, printThird: 'Callable[[], None]') -> None:
        self.second_done.wait()  # Wait for second() to complete
        # printThird() outputs "third". Do not change or remove this line.
        printThird()
