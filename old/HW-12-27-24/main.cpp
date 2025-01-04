/*
TODO 1:Two Sum (these (and future) problems are formal, main point is to understand the way to get to soving)
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input:
nums = [3,4,5,6], target = 7

Output: [0,1]
Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2:

Input: nums = [4,5,6], target = 10

Output: [0,2]
Example 3:

Input: nums = [5,5], target = 10

Output: [0,1]

Constraints: // don't worry too much about these; good to know though.

2 <= nums.length <= 1000
-10,000,000 <= nums[i] <= 10,000,000
-10,000,000 <= target <= 10,000,000


(hint: Before you write code below, think about what info your storing (likely some index or int) and how it can be best represented (like a hash table/ map))
all the hash tables/ maps and other data structures are on w3
*/

/*
TODO 2:
Group Anagrams
Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
Example 2:

Input: strs = ["x"]

Output: [["x"]]
Example 3:

Input: strs = [""]

Output: [[""]]
Constraints:

1 <= strs.length <= 1000.
0 <= strs[i].length <= 100
strs[i] is made up of lowercase English letters.

hint: since we are only dealing with lower case letters, how can we represent an anagram (letter frequency) using other data structures
    and can we have multiple of the same frequency data structure (ie their parent strings are anagrams of eachother); how does this help us separate the strings

    Just a heads up; use a hashing type data structure = sets (ordered/unordered) and hash tables/maps
*/