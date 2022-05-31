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

- Using a heap, we can extract only the top 10 elements without giving ranks to the rest of the students.

- First we will insert elements in the heap, then pop the largest element.



