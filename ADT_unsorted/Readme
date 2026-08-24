This C++ program implements a menu driven system for performing dynamic operations on a fixed size 1D array of up to 100 elements. The user first inputs the initial array size and elements, then continuously interacts with a menu to perform insertion, deletion, linear search, or display operations until choosing to exit.

Program Overview and Features

The application starts by initializing an integer array with a maximum capacity of 100 and populating it with a user-specified number of elements. The execution then enters a do-while loop presenting five main choices.
Choice 1 handles insertion at a specified index. It validates the index within bounds, shifts existing elements to the right starting from the end of the array down to the given position, places the new element, and increments the element count.
Choice 2 performs element deletion from a valid index. It checks if the array is non-empty, shifts all subsequent elements to the left by one position to fill the gap, and decrements the total count.
Choice 3 conducts a linear search. It iterates through the array sequentially from index 0 to n minus 1, returning the exact index when the target key is matched or indicating that the element is absent.
Choice 4 iterates through the active array elements from start to finish and prints them space-separated.
Choice 5 terminates the program, while any choice outside 1 through 5 prompts an invalid option warning.

Time Complexity Analysis

Insertion operation requires O(N) time in the worst and average cases because elements must be shifted to the right to make room at the desired position. Inserting at the very end takes O(1) time.
Deletion operation takes O(N) time in the worst and average cases due to leftward shifting of remaining elements. Deleting from the end takes O(1) time.
Search operation uses linear search, taking O(N) time in the worst case when the element is at the end or missing, and O(1) time in the best case when the target is at index 0.
Display operation takes O(N) time as it iterates through all N active elements in the array once.
Overall space complexity is O(1) auxiliary space beyond the pre-allocated fixed array of 100 integers.

Sample Output

Enter the number of elements: 4
Enter the elements of the unordered array:
5 12 8 20

MENU

1. Insert Element
2. Delete Element
3. Search Element
4. Display Array
5. Exit
Enter your choice: 3
Enter element to search: 8
Element found at index 2.

MENU

1. Insert Element
2. Delete Element
3. Search Element
4. Display Array
5. Exit
Enter your choice: 5
Exiting program...
