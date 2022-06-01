# Heaps Intro

## What is a heap?

- Heaps are a data structure and are also known as **priority queues**. This means that we can visualise a heap as a queue. 

						A <- B <- C <- D

- Assume the above scenario where we have a queue in FIFO order. If we want to remove people from the queue, we want to give them a certain priority. If we assign ages to all elements and say we allow those with a greater age to be in front of the queue first, this is an example of a priority queue. 

- Although it appears that we are just sorting the elements, this is not the case. 

- When we perfom pop(), the element with the highest priority comes out first instead of a FIFO order.

## Heaps Methods

- push()
- pop()
- get() -> get the element in the front of the queue


## Motivation for using a heap

- We will consider a problem to understand this. The type of problem we will be considering is the max/min of N elements.

### 10,000 students appeared for a coding contest. Find the top 10 students. You will be given an array of 10000 students' marks.

- Why not do sorting for the above problem? Using something like mergeSort taking a complexity of N Log N.

- Using a heap, we can extract only the top 10 elements without giving ranks to the rest of the students using its push, pop and get operations.

#### Why use heaps instead?

| Methods     	| Array 	| Sorted Array 	| List 	| BST(wort case Height -> N) 	| Heap     	|
|-------------	|-------	|--------------	|------	|----------------------------	|----------	|
| Insert/Push 	| O(1)  	| O(N)         	| O(1) 	| O(H)                       	| O(Log N) 	|
| Pop         	| O(N)  	| O(1)         	| O(N) 	| O(H)                       	| O(Log N) 	|
| Get         	| O(N)  	| O(1)         	| O(N) 	| O(H)                       	| O(1)     	|


## What defines a heap?

### A Heap follows the structure of a binary tree

- This means that its nodes have a maximum of 2 child nodes.

### It follows a Complete Binary Tree(CBT) property

- This property is abided if all levels are completely filled except last level which should be partially be filled, but the filling must be left to right order.

### Heap Order Property

- There are broadly 2 types of heaps -> a min heap, which will give you the smallest element while a max heap will give you the biggest element inserted.

- Every parent node in the heap will have a higher value than its children(considering a max heap). -> this is the heap order property

- In min heap, every parent node must have a value lower than its children then only does the heap follow the heap order property.


## How we can visualise a heap?

**Do not represent a heap as a Binary Tree**

- If we visualise the heap as a binary tree, and we try to insert an element, we will do a **level order traversal** in order to find the next NULL position to insert the element to follow the Complete Binary Tree Property. When this is done, then this will lead to a time complexity of O(N) for just searching the spot to insert the element.

- However, for a heap, its time-space complexity for insertion is actually lesser (O(Log N)).

**Instead we will represent a heap as an array**

- Before this, we need to understand the information a binary tree contains(since a heap follows a binary tree structure). Each node in a binary tree has a parent and 2 child nodes.

### Representing a heap in the form of an array

*Consider the binary tree below*

![](images/binary-tree-01)

*Now we number the nodes in the binary tree in level order*

![](images/binary-tree-02)

- Looking at the numbering of the nodes in the tree, we can see that the child nodes of each parent have the following values(if parent node is n, then its child nodes are 2n and 2n+1).


- 
