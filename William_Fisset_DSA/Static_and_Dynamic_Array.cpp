/*
            Static Array    Dynamic Array
Access              O(1)            O(1)
Search              O(n)            O(n)
Insertion            N/A            O(n)
Appending            N/A            O(1)
Deletion             N/A            O(n)

Implementing a dynamic array:
    1. Create a static array with initial capacity
    2. Add elements to underlying static array, keeping track of the number of elements
    3. If adding another element will exceed the initial capacity, then create a new static array
    with twice the capacity and copy the original elements into it
*/