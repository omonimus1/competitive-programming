# Lecture 1 Notes 
###### Theory and Images could be based on the Lecures materials provided by Dt. Simon Wells at Napier university

Many Data Structures & Algorithms are specified against an abstract machine and optimised for a specific architecture/implementation. 

* Data structure: organised collectiosn of data. 
* Harvard Architecture

* Princeton Architecture

* EDVAC machine : one of the earliest eletronic computers. 

### Difference between program and algorithm 

* Algorithm is just a collection of instructions to do something. But that's pretty abstract, it's not tied to the specific way its done. For example there's a maze solving algorithm that goes like this: "Whenever you reach an intersection in the maze, take an unmarked path at random if available, then mark it. If no unmarked paths are available, take a path with a single mark at random and give it a second mark. Do not follow any path marked twice." This is an algorithm, but its not a program, how you perform it, or how a machine performs it will be different, but you can still all perform it.

However if you take that algorithm and you write it up in a programming language, to perform that algorithm on a piece of hardware, on a system that can execute that code, then you have a program.

* Algorithm is the logic of the program.

## C primtivies

Each C variable has a primitve data type associaded with it. Each primitve can store a differnt range of values, and the actual size of the datatype can depend upon the system architecture.

To know the max ranges of different datatypes, we can see the library ```limit.h``` , including as normal using ```#include <limit.h>```

### Von Neumann Architecture

It's the design of a digital architecture made up of: central Processing Unit (CPU), Arithmetic Logic Unit(ALU), processor Registers, Control Unit (containing instruction register & program counter), Memory (storing data & instructions), mass storage, I/O Mechanism, all of them connected by a bus (communication pathways). 

* Von Neumann Bottleneck: there is always a limited bandwidth to move data from one location to another - if there is too much data then the lmities factor on speed is the bus. 


### Data & types

Depending upon the language, we may have:
* Primitives data types: int, char, float, doouble, string and references.
* Composite types : array and struct 
* Linear types: array, list, vectors, matrices
* Associative tyoes:d ict, aps, sets, tuples
* Abstract data types: lists, stack, queues, Deques, Trees, graph.
* Concrete data types: may or may not be identical to the bastract types. 

### C primitives

Char, int, float, double. Actual size varies depending upon implementation (perhaps we'll investigate this in the lab). Each primitive data type has an associated pointer data type. 

### Struct

A composite type (in contrast to primitives) is an aggregation of multiple (potentially differing) primitive data types. It can contain pointers to other structured (used to build linked data structures).

### Sequential / Linear Structures

A way to organise primitive data types in relation to each other - as various kinds of sequences.

Another composite datatype (in contrast to primitives). A linear data structure is made by elements form a sequence. They are always static data structures and it is a collection of values of the same type. Stored contiguously in memory. 

### Array limitations

Programming languages, particularly higher level ones, generally implemented using lower level languages. Often used within the implementation of more advanced data structures. 

Algorithms can be used to do computation or process data. It is an unambiguous specification for how to solve a problem. An algorithm start with an initial state (and possibly empty input, proceed through a finite number of intermediate states by executing instructions and produce an output and termination state.

### Cost of computation

There are cost involved in computation
* Storing data uses memory.
*  Finding data uses CPU
* Moving data around uses CPU & memory. 

All these operations require time (abstraction from CPU usage) and space (abstraction from memory usage). 




