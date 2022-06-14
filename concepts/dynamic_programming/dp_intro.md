# Introduction to Dynamic Programming

			"Those who cant remember their past are condemned to repeat it"



## What is DP?

- If we have the following example:
		1 + 1 + 1 + 1 + 1 = 5

- and we are asked to solve this:
		1 + 1 + 1 + 1 + 1 + 1 = ?

- How would we do this?

  - One way is to manually do it and get the answer 6. Another way(DP Way) is to remember the previous example which is 
5 and we can see that the answer to the problem can be reduced to 5 + 1 = 6.


- Hence, DP is all about memorising the answers to the subproblems to solve the main problem itself.


## Where can we apply DP?

- **When we see an optimal substructure**
- **When we see overlapping subproblems**

- For example, in the previous example, Sum(6) can be written as Sum(5) + 1 which is an example of an optimal substructure since the problem(Sum(6)) can be split into subproblems of the same kind.

Lets consider the Fibonnacci Problem.

In the Fibonnacci sequence, the ith term is given as f(i) = f(i-1) + f(i-2).

In this sequence, when we draw the recursion tree, we will observe that there are many states that are being repeated which is an example of overlapping subproblems. We waste extra time computing these subproblems more than once. Hence in DP, we will **memorise the answers for these subproblems so that we do not compute these subproblems more than once**.

## Types of DP

There are 2 main types of DP:

- Top Down DP (Recursion + Memoisation) (Move from the top to the base case)
- Bottom Up DP (Move from the base case to the answer)


