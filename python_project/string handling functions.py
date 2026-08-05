# lower(), upper(), capitalize(), title(), swapcase()
def demonstrate_string_case_functions():
    sample_text = "hello world! welcome to python programming."
    print("Orginal Text:", sample_text)
    print("Lower Case:", sample_text.lower())
    print("Upper Case:", sample_text.upper())
    print("Capitalize Case:", sample_text.capitalize())
    print("Swap Case:", sample_text.swapcase())
    print("Title Case:", sample_text.title())
    
    # checking and searching functions

    print(sample_text.find("python")) # Find substring "python"
    print(sample_text.count("python")) # Count occurrences of substring "python"
    print(sample_text.index("python")) # Find the index of substring "python"
    print(sample_text.startswith("hello")) # Check if string starts with "hello"
    print(sample_text.endswith("ming")) # Check if string ends with "ming"

    # String Testing (Boolean Functions)

    print(sample_text.isalnum()) # Check if all characters are alphanumeric
    print(sample_text.isalpha()) # Check if all characters are alphabetic
    print(sample_text.isdigit()) # Check if all characters are digits
    print(sample_text.islower()) # Check if all characters are lowercase
    print(sample_text.isupper()) # Check if all characters are uppercase
    print(sample_text.isspace()) # Check if all characters are whitespace

    # Modification and Replacement Functions

    print(sample_text.replace("python", "Java")) # Replace "python" with "Java"
    s = "   Hello, World!   "
    print(s.strip()) # Removes spaces from both ends
    print(s.lstrip()) # Removes spaces from the left end
    print(s.rstrip()) # Removes spaces from the right end

    # Split and Join Functions

    fruits = "apple,banana,cherry"
    fruit_list = fruits.split(",") # Split string into a list
    print(fruit_list)
    new_fruits = "-".join(fruit_list) # Join list into a string with "-"
    print(new_fruits)
    joined_string = "_".join("abcd") # Join characters with "_"
    print(joined_string)

    # Formatting Functions

    name = "Alice"
    age = 18
    formatted_string = "My name is {} and i am {} years old.".format(name, age)
    print(formatted_string)
    naam = "Dhruv"
    saal = 19
    print(f"My name is {naam} and I am {saal} years old.")

    # Alignment Functions

    text = "Hello"
    print(text.center(20, '*'))
    print(text.ljust(20, '-'))
    print(text.rjust(20, '+'))

    # Encoding Functions

    words = "Noah"
    encoded_words = words.encode("utf-8")
    print(encoded_words)
    print(type(encoded_words))

    # Decoding Functins

    decoded_words = encoded_words.decode("utf-8")
    print(decoded_words)
    print(type(decoded_words))

    # sorting function

    str_list = ["banana", "apple", "cherry", "mango"]
    print("Original List:", str_list)
    str_list.sort()
    print("Sorted List:", str_list)
    print("Reversed List:", str_list[::-1])
    print("Length of list:", len(str_list))
    print("Maxmum element:", max(str_list))
    print("Minimum element:", min(str_list))
    print("ASCII value of 'a':", ord('a'))
    print("Character for ASCII value 97:", chr(97))
    print("--------------------------------------------------")
    bubble_sorted_list = ["banana", "apple", "cherry", "mango"]
    print("Bubble sorted:", bubble_sorted_list)
    print("n:",len(bubble_sorted_list))
    print("--------------------------------------------------")
    print("str_list[0:3]:",str_list[0:3]) # Slicing ['apple', 'banana', 'cherry', 'mango']

    
demonstrate_string_case_functions()
    