/*TODO: Longest Consecutive Sequence
Given an array of integers nums, return the length of the longest consecutive sequence of elements that can be formed.

A consecutive sequence is a sequence of elements in which each element is exactly 1 greater than the previous element. The elements do not have to be consecutive in the original array.

You should write an algorithm that runs in O(n) time.


The provided data type is std::unordered_set or unordered_set; it uses a hash function to have only unique elements
to create an interger set do: std::unordered_set<int> [NAME HERE];
to add elements use [NAME HERE].insert(int); to check if element is in the set do [NAME HERE].find(int);

Think about finding the starting values of consecutive sequences by checking if some element - 1 exists in the set;
(YOU CAN STILL BE INEFFICEINT; just try and come up with a solution with or without sets/hasing)
*/

#include <unordered_set>
#include <iostream>

int main()
{
    int nums[] = {3, 5, 11, 4, 10, 9, 2, 13, 14, 1, 15};
    //[FOR TESTING] make a general program not one that just solves this case
}
