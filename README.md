# Daily-Coding-Solutions
My solutions to the daily coding problem. This will be done in C++

Problems by number and description:

1: Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
    Bonus: Can you do this in one pass?
2: Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
    Follow-up: what if you can't use division?
3: Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.
4: Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.
    You can modify the input array in-place.
5: cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

    Given this implementation of cons:

    def cons(a, b):
        def pair(f):
            return f(a, b)
        return pair
    Implement car and cdr.