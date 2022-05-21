# Compile Time Memory Allocation

# Types of memory allocation in C++

- There are two main types of memory allocation in C++ mainly static allocation(compile time allocation) and dynamic memory allocation

# What is compile time allocation?

- When you write a program and you create a few variables to store some data. Each of these variables will take up certain space such as int takes up 4 bytes. This much memory needs to be reserved in the system. 

- When the program is being compiled, RAM memory is actually not occupied. RAM is allocated **only during the execution of the program.**

- Hence, in compile time allocation, we decide the memory requirement of each variable and where to map these variables in the RAM.

# How does compile time allocation work?

- During the compilation of the program, the compiler allocates each variable to a certain position in the **virtual memory**. For example, in the virtual memory if we have have 500 bytes, and we have an integer array that can hold 100 integers, this integer array will take up the first 400 bytes of the virtual memory.

- A symbol table will be created in which the compiler maps each variable to its position in the symbol table.

- During **runtime**, just before the program execution, the each of the variables will be mapped to the actual RAM based on its position in the virtual memory. 

- Hence, in compile time allocation, the sizes and locations of variables are fixed without the memory (RAM) being allocated during compile time itself and hence cannot be changed during runtime.

# Advantages of Compile Time Allocation

- It is slightly faster than dynamic memory allocation. Before the execution of the program, sizes and locations of variables are all set.

# Disadvantages of Compile Time Allocation

- It is less flexible, we cannot change the size of the variable after runtime even if we want to do so.
