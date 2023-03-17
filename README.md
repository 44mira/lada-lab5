# lada-lab5
*Checks if your input is a palindrome using ADT Stack.*

## FAQ:

### *What are stack_class.cpp and stack_class.h?*
![image](https://user-images.githubusercontent.com/116419708/225888944-8c2d110f-4fd7-4faf-adad-c992ac477a98.png)
  - declares the Stack class/object to be used in seperate files
    - for the sake of simplicity, you may only concern yourself with its constructor, and pop() method.
    - for the sake of NOT simplicity, it has methods of any standard Stack-based object, which include append(), pop(), is_empty(), is_full(), and get_length(), and 
      more.
  - you can view their codes in the repository.
  <br>
  
  
### *What are Stack constructors?*
![image](https://user-images.githubusercontent.com/116419708/225889107-b94c7436-19e3-4afe-9dc3-2f5826468d2a.png)
  - sets values for the instance of Stack class being created
    - the important constructor here is the one where it takes in a string (used in lada_lab5.cpp) where it automatically appends all characters of the
      passed string into the stack, and sets the length, size, and isEmpty state of the Stack.
    - the other constructor that is included (which is also overloaded) creates a Stack with a defined size given by the argument passed, sets length to 0 and isEmpty
      to true.
    <br>
      
      
### *Is it required to make seperate files for the classes?*
![image](https://user-images.githubusercontent.com/116419708/225889325-3057d597-b1ee-41ff-aa73-2502a2fd31ba.png)
  - nope, you can put in the Stack object into the same file as your main(). i just do not prefer doing it that way.
  <br>
      
      
### *What is transform()?*
![image](https://user-images.githubusercontent.com/116419708/225888864-7b35b03f-6239-48a1-b409-341896b7aec5.png)
  - a function in \<algorithm\> that I used to lowercase all characters in the input, c++ does not have a built-in method for that, unfortunately.
  <br>


### *What is the algorithm?*
![image](https://user-images.githubusercontent.com/116419708/225889459-7f4af727-0399-446c-b7dc-d3aba61ec198.png)
  - takes in the input (input_word) from user, lowercases it, and then appends all of it onto a Stack object
  - all the elements in the Stack object are then popped (removed from the top and then values returned) and concatenated into reversed_word
    - since pop() takes values from the top of the Stack, reversed_word is in, well, reverse
  - outputs result based on the comparison of whether input_word is equal to reversed_word
    - palindromes are equal to themselves when reversed
  <br>

\- L
