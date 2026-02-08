# Design Patterns for Beginners (Python)
> ⚠️ **Note:** This is **NOT a complete list of design patterns**.
> This file covers **beginner-friendly and commonly used patterns** to build strong fundamentals.

---

## 📌 Checklist (Explained vs Not Yet)

* [x] Singleton

* [x] Factory

* [x] Strategy

* [x] Observer

* [x] Decorator

* [x] Adapter

* [x] Multithreading (Basics)

* [X] Builder

* [X] Command

* [X] Facade

* [X] Proxy

* [X] State

* [X] Template Method

---

## Builder Builds complex objects step by step.

```
class Car:
    def __init__(self):
        self.parts = []

    def add_part(self, part):
        self.parts.append(part)

car = Car()
car.add_part("Engine")
car.add_part("Wheels")
```
## Command

Encapsulates a request as an object.
```
class Light:
    def on(self):
        print("Light ON")

class LightOnCommand:
    def execute(self):
        Light().on()

cmd = LightOnCommand()
cmd.execute()
```
## Facade Provides a simple interface to a complex system.
```
class CPU:
    def start(self): print("CPU started")

class Computer:
    def start(self):
        CPU().start()

Computer().start()
```
## Proxy Controls access to another object.
```
class RealService:
    def request(self):
        print("Real request")

class Proxy:
    def request(self):
        print("Checking access")
        RealService().request()

Proxy().request()
```
## State: Changes behavior when internal state changes.
```
class StateA:
    def handle(self): print("State A")

class Context:
    def __init__(self, state):
        self.state = state

Context(StateA()).state.handle()
```
## Template Method Defines algorithm structure, subclasses fill details.
```
class Game:
    def play(self):
        self.start()
        self.end()

    def start(self): pass
    def end(self): pass

class Chess(Game):
    def start(self): print("Chess started")
    def end(self): print("Chess ended")

Chess().play()
```
## 🧵 Multithreading (Beginner Examples)

### Example 1: Basic Thread Creation

**Runs tasks concurrently using threads.**

```python
import threading

def task(name):
    print(f"Task {name} running")

t1 = threading.Thread(target=task, args=("A",))
t2 = threading.Thread(target=task, args=("B",))

t1.start()
t2.start()

t1.join()
t2.join()
```

---

### Example 2: Thread with Shared Data (Using Lock)

**Prevents race conditions when threads share data.**

```python
import threading

counter = 0
lock = threading.Lock()

def increment():
    global counter
    with lock:
        counter += 1

threads = []
for _ in range(100):
    t = threading.Thread(target=increment)
    threads.append(t)
    t.start()

for t in threads:
    t.join()

print(counter)  # 100
```

---

### Example 3: Thread Pool (High-Level & Cleaner)

**Manages a pool of worker threads.**

```python
from concurrent.futures import ThreadPoolExecutor

def task(n):
    return n * n

with ThreadPoolExecutor(max_workers=3) as executor:
    results = executor.map(task, [1, 2, 3, 4])

print(list(results))
```

---

---

If you want next:

* Add **Producer–Consumer pattern** (classic interview favorite)
* Add **thread-safe Singleton**
* Convert this into a **learning roadmap** (Beginner → Intermediate)

Just tell me 🚀

## 1. Singleton

**Ensures only one instance of a class exists.**

```python
class Singleton:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
        return cls._instance

a = Singleton()
b = Singleton()
print(a is b)  # True
```

---

## 2. Factory

**Creates objects without exposing creation logic.**

```python
class Dog:
    def speak(self):
        return "Bark"

class Cat:
    def speak(self):
        return "Meow"

def animal_factory(animal_type):
    if animal_type == "dog":
        return Dog()
    return Cat()

animal = animal_factory("dog")
print(animal.speak())
```

---

## 3. Strategy

**Selects behavior at runtime.**

```python
class Add:
    def execute(self, a, b):
        return a + b

class Multiply:
    def execute(self, a, b):
        return a * b

class Calculator:
    def __init__(self, strategy):
        self.strategy = strategy

calc = Calculator(Add())
print(calc.strategy.execute(2, 3))
```

---

## 4. Observer

**Notifies multiple objects when state changes.**

```python
class Observer:
    def update(self, msg):
        print("Received:", msg)

class Subject:
    def __init__(self):
        self.observers = []

    def subscribe(self, obs):
        self.observers.append(obs)

    def notify(self, msg):
        for obs in self.observers:
            obs.update(msg)

s = Subject()
s.subscribe(Observer())
s.notify("Hello")
```

---

## 5. Decorator

**Adds behavior without modifying the original class.**

```python
def my_decorator(func):
    def wrapper():
        print("Before")
        func()
        print("After")
    return wrapper

@my_decorator
def say_hi():
    print("Hi")

say_hi()
```

---

## 6. Adapter

**Makes incompatible interfaces work together.**

```python
class OldSystem:
    def old_method(self):
        return "Old Result"

class Adapter:
    def __init__(self, old_system):
        self.old_system = old_system

    def new_method(self):
        return self.old_system.old_method()

adapter = Adapter(OldSystem())
print(adapter.new_method())
```

---

