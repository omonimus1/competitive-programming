## Multi threading
Key library: from [threading library](https://docs.python.org/3/library/threading.html)


- [Semaphore implementation](https://github.com/omonimus1/competitive-programming/blob/master/Leetcode/concurrency/1115_print_foo_bar_alternated.py)
- [Event based multi-threading: service A execute After B, B is executed after service C runned (as example)](https://github.com/omonimus1/competitive-programming/blob/master/Leetcode/concurrency/1114_print_in_order.py)

## Timer:
- 1 shot: fire and forget. Adds a delay before executing a code.
```
def hello():
    print("hello, world")

t = Timer(30.0, hello)
t.start()  # after 30 seconds, "hello, world" will be printed
```
