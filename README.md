# lada-lab5
Checks if your input is a palindrome using ADT Stack.

FAQ:

? What are stack_class.cpp and stack_class.h
  - declares the Stack class/object to be used in seperate files
    - for the sake of simplicity, you may only concern yourself with its constructor, and pop() method.
    - for the sake of NOT simplicity, it has methods of any standard Stack-based object, which include append(), pop(), is_empty(), is_full(), and get_length(), and more.
  
? What are Stack constructors
  - sets values for the instance of Stack class being created
    - the important constructor here is the one where it takes in a string (used in lada_lab5.cpp) where it automatically appends all characters of the
      passed string into the stack, and sets the length, size, and isEmpty state of the Stack.
    - the other constructor that is included (which is also overloaded) creates a Stack with a defined size given by the argument passed, sets length to 0 and isEmpty to
      true.
      
? Is it required to make seperate files for the classes?
  - nope, you can put in the Stack object into the same file as your main(). i just do not find it pleasing to do so.
      
? transform()
  - a function in <algorithm> that I used to lowercase all characters in the input, c++ does not have a built-in method for that, unfortunately.

? Algorithm
  - takes in the input (input_word) from user, lowercases it, and then appends all of it onto a Stack object
  - all the elements in the Stack object are then popped (removed from the top and then values returned) and concatenated into reversed_word
  - outputs result based on the comparison of whether input_word is equal to reversed_word
