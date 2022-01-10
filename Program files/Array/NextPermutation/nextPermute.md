Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

```
Example 1: 
Input format: Arr[] = {1,3,2}

Output: Arr[] = {2,1,3}

Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.


Example 2:
Input format: Arr[] = {3,2,1}

Output: Arr[] = {1,2,3}

Explanation: As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the topmost permutation.

```
**Thanks to Striver (Raj vikramaditya) for 3-D view of Solution.**

**Solution 1 : Brute Force**: Finding all possible permutations. 

* Approach :

- Step 1: Find all possible permutations of elements present and store them.

- Step 2: Search input from all possible permutations.

- Step 3: Print the next permutation present right after it.

- For reference of how to find all possible permutations, follow up https://www.youtube.com/watch?v=f2ic2Rsc9pU&t=32s. This video shows for distinct elements but code works for duplicates too.

Time Complexity :

For finding, all possible permutations, it is taking N!xN. N represents the number of elements present in the input array. Also for searching input arrays from all possible permutations will take N!. Therefore, it has a Time complexity of O(N!xN).

Space Complexity :

Since we are not using any extra spaces except stack spaces for recursion calls. So, it has a space complexity of O(1).

**Solution 2 : Using C++ in-built function**

C++ provides an in-built function called next_permutation() which directly returns the lexicographically next greater permutation of the input.


**Solution 3 :**

- Intuition :

> Intuition lies behind the lexicographical ordering of all possible permutations of a given array There will always be an increasing sequence of all possible permutations when observed.

- Approach :

> Step 1: Linearly traverse array from backward such that ith index value of the array is less than (i+1)th index value. Store that index in a variable.

> Step 2: If the index value received from step 1 is less than 0. This means the given input array is the largest lexicographical permutation. Hence, we will reverse the input array to get the minimum or starting permutation. Linearly traverse array from backward. Find an index that has a value greater than the previously found index. Store index another variable.

> Step 3: Swap values present in indices found in the above two steps.

> Step 4: Reverse array from index+1 where the index is found at step 1 till the end of the array.


* Time Complexity: For the first iteration backward, the second interaction backward and reversal at the end takes O(N) for each, where N is the number of elements in the input array. This sums up to 3*O(N) which is approximately O(N).

* Space Complexity: Since no extra storage is required. Thus, its complexity is O(1).