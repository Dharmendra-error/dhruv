# List and Tuple Handling Functions
def demonstrate_list_tuple_functions():
    # Creating a list
    sample_list = [5, 2, 9, 1, 5, 6]
    print("Original List:", sample_list)

    # Sorting the list
    sample_list.sort()
    print("Sorted List:", sample_list)

    # Reversing the list
    sample_list.reverse()
    print("Reversed List:", sample_list)

    # Appending an element
    sample_list.append(12)
    print("List after appending 12:", sample_list)

    # Extending the list
    sample_list.extend([3, 44, 7])
    print("List after extending [3, 44, 7]:", sample_list)

    # Inserting an element at index 2
    sample_list.insert(2, 15)
    print("List after inserting 15:", sample_list)

    # Removing an element
    sample_list.remove(15)
    print("List after removing 15:", sample_list)

    # Popping the element
    popped_element = sample_list.pop() # removes Last element 
    print("popped element:", popped_element)
    print("List after popping last element:", sample_list)

    # Length of the list
    print("Length of List:", len(sample_list))

    # Maximum and Minimum elements
    print("Maximum element:", max(sample_list))
    print("Minimum element:", min(sample_list))

    # Searching and Counting elements
    count_of_5 = sample_list.count(5)
    print("Count of 5 in the list:", count_of_5)
    index_of_9 = sample_list.index(9)
    print("Index of 9 in the list:", index_of_9)

    # Copying the list
    copied_list = sample_list.copy( ) # Shallow copy
    print("Copied List:", copied_list) 
    list_id = id(sample_list) # ID of original list
    copied_list_id = id(copied_list) # ID of copied list
    print("ID of orignal list:", list_id) 
    print("ID of copied list:", copied_list_id) # Different IDs

    # sum of elements
    sum_of_elements = sum(sample_list)
    print("Sum of elements in the list:", sum_of_elements)

    # Removing all elements
    sample_list.clear()
    print("List after clearing all elements:", sample_list)

    # Creating a tuple
    sample_tuple = (3, 1, 4, 1, 5, 9)
    print("Original Tuple:", sample_tuple)

    # Converting tuple to list for sorting
    tuple_as_list = list(sample_tuple)
    tuple_as_list.sort()
    sorted_tuple = tuple(tuple_as_list)
    print("Sorted Tuple:", sorted_tuple)

    # Length of the tuple
    print("Length of Tuple:", len(sample_tuple))

    # Maximum and Minimum elements in tuple
    print("Maximum element in Tuple:", max(sample_tuple))
    print("Minimum element in Tuple:", min(sample_tuple))

    # Counting and finding index in tuple
    count_of_1 = sample_tuple.count(1)
    print("Count of 1 in the tuple:", count_of_1)
    index_of_4 = sample_tuple.index(4)
    print("Index of 4 in the tuple:", index_of_4)

    print("--------------------------------------------------")
demonstrate_list_tuple_functions()
        