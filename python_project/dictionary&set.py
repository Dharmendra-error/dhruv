def demonstrate_dictionary_set():
    # Creating a dictionary
    student = { "name": "Dhruv","age": 19,"courses": ["Math", "Compsci", "Physics"],"is_active": True }
    print("Original Dictionary:", student)

    # Accessing elements
    print("Name:", student["name"]) # Accessing using key
    print("Age:", student.get("age")) # Accessing using get method

    # Adding a new key-value pair
    student["grade"] = "A" 
    print("Dictionary after adding grade:", student)

    # Updating an existing key-value pair
    student["age"] = 20
    print("Dictionary after updating age:", student)

    # Removing a key-value pair
    removed_course = student.pop("courses")
    print("Removed courses:", removed_course)
    print("Dictionary after removing courses:", student)

    # Length of the dictionary
    print("Length of Dictionary:", len(student))

    # Keys and Values
    print("Keys:", list(student.keys()))
    print("Values:", list(student.values()))

    # Iterating through the dictionary
    for key, value in student.items():
        print(f"{key}: {value}")

    print("--------------------------------------------------")

    # Creating a set
    s = {1, 2, 3, 4, 5}
    print("Original set:", s)

    # Adding an element to the set
    s.add(6)
    print("Set after adding 6:", s)

    # Removing an element from the set
    s.remove(3)
    print("Set after removing 3:", s)

    # Updateing the set with multiple elements
    s.update([7, 8, 9]) 
    print("Set after updating with [7, 8, 9]:", s)

    # Discarding an element from the set
    s.discard(10)  # Does not raise an error if 10 is not present
    print("Set after discarding 10 (not present):", s)

    # Length of the set
    print("Length of Set:", len(s))

    # Union of sets
    p = {4, 5, 6, 7, 10, 11}
    print("Another set p:", p)
    union_set = s.union(p)
    print("Union of sets s and p:", union_set) # all elements from both sets
    another_union_set = s | p  # Using '|' operator for union
    print("Union of sets s and p using '|':", another_union_set)

    # Intersection of sets
    intersection_set = s.intersection(p) 
    print("Intersection of sets s and p:", intersection_set) # common elements

    # Difference of sets
    difference_set = s.difference(p)
    print("Difference of sets s and p (s - p):", difference_set)
    another_difference_set = p.difference(s)
    print("Difference of sets p and s (p - s):", another_difference_set)

    # Symmetric Difference of sets
    symmetric_difference_set = s.symmetric_difference(p) # elements in either set but not in both
    print("Symmetric Difference of sets s and p:", symmetric_difference_set)
    another_symmetric_difference_set = s ^ p  # Using '^' operator for symmetric difference
    print("Symmetric Difference of sets s and p using '^':", another_symmetric_difference_set)

demonstrate_dictionary_set()
