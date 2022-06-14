# Fibonnaci Recursion (in DP)

## Why can we use DP to find the nth term in a fibonnaci sequence?

Because it fulfils the 2 criterias to use DP.

- Optimal Substructure

   In the sequence, to find the ith term we need to find the f(i-1) and f(i-2) terms. This is the case of every other term in the fibbonacci sequence.

- Overlapping Subproblems

   When we go through the sequence using recursion, we will see that there are many subproblems being repeated.


Hence for the sequence, we can generate the following recurrence:
				f(n) = f(n-1) + f(n-2)

We can do 2 approaches in DP to solve this problem:

- Top Down Approach:
   - In this approach, we will start from the top(starting from the ith term). Then we will make calls to i-1th term and i-2th term. This will keep going on until we hit the base case which is either 1 or 0. In this, we will also store the answer of each term in an array(*which we will call as the DP array*). Before making the call to the i-1th and i-2th term, we will check if the current term's answer **has already been computed beforehand**. This way, we ensure we calculate each subproblem **only once**.

- Bottom Up Approach:
  - In this, we will start by creating a DP Array and start filling out from index 1. Index 0 will be storing the value 0 and index 1 will store the value 1. Index 2's value will be the sum of 0 and 1 which will be 1. Then for 3, instead of having to compute the value of 2 seperately we can just refer to DP Array and get the answer for 3 which will be 2.
