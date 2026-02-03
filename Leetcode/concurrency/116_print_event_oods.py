import threading

class ZeroEvenOdd:
    def __init__(self, n):
        self.n = n
        self.sEven = threading.Semaphore(0)
        self.sOdd = threading.Semaphore(0)
        self.sZero = threading.Semaphore(1) # this it the starting point
        
        
	# printNumber(x) outputs "x", where x is an integer.
    def zero(self, printNumber: 'Callable[[int], None]') -> None:
        for i in range(1, self.n + 1):
            self.sZero.acquire()
            printNumber(0)
            if i%2:
                self.sOdd.release()
            else:
                self.sEven.release()
            
            
    def even(self, printNumber: 'Callable[[int], None]') -> None:
        for i in range(2,self.n+1,2):
            self.sEven.acquire()
            printNumber(i)
            self.sZero.release()
        
        
    def odd(self, printNumber: 'Callable[[int], None]') -> None:
        for i in range(1,self.n+1,2):
            '''
            You cannot do with self.sOdd: because with the block it will release the thread and then intentionally we are releasing the sZero semaphore thread, so there it becomes 2 active threads.
            '''
            self.sOdd.acquire()
            printNumber(i)
            self.sZero.release()
        
        
