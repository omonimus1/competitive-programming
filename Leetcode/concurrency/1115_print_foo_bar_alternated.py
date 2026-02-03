# https://leetcode.com/problems/print-foobar-alternately/description/
# thread A will call foo(), while
# thread B will call bar().
from threading import Semaphore
class FooBar:
    def __init__(self, n):
        self.n = n
        self.foo_sem = Semaphore(1)  # foo goes first
        self.bar_sem = Semaphore(0)  # bar waits

    def foo(self, printFoo: 'Callable[[], None]') -> None:
        for i in range(self.n):
            self.foo_sem.acquire()       # wait for permission
            printFoo()                   # critical action
            self.bar_sem.release()       # allow bar next
            
    def bar(self, printBar: 'Callable[[], None]') -> None:
        for i in range(self.n):
            self.bar_sem.acquire()       # wait for permission
            printBar()                   # critical action
            self.foo_sem.release()       # allow foo next

