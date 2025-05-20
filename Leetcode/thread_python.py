# https://leetcode.com/problems/print-in-order/
"""
Suppose we have a class:

public class Foo {
  public void first() { print("first"); }
  public void second() { print("second"); }
  public void third() { print("third"); }
}
The same instance of Foo will be passed to three different threads. Thread A will call first(), thread B will call second(), and thread C will call third(). Design a mechanism and modify the program to ensure that second() is executed after first(), and third() is executed after second().

Note:

We do not know how the threads will be scheduled in the operating system, even though the numbers in the input seem to imply the ordering. The input format you see is mainly to ensure our tests' comprehensiveness.
   =============================================================
step is a shared state that tracks the progress (0: nothing done, 1: first done, 2: second done).

cv.wait(lock, predicate) waits until the predicate is true, releasing the lock in the meantime.

After each function completes, it updates the step and calls notify_all() to wake any threads waiting on the condition. 
🔹 self.first_done = Event()
Used to signal that first() has finished.

The method second() will call self.first_done.wait(), which blocks until this event is set.

Once first() completes, it calls self.first_done.set() — this unblocks any threads waiting on it (in this case, second()).
"""
from threading import Event
from typing import Callable

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
