/* lada stack class */

#ifndef STACK_CLASS
#define STACK_CLASS

#include <iostream>

class Stack
{
    private: 
      int length, size;
      bool isEmpty;
      char* letters;
   public:
      Stack(int size);
      Stack(std::string word);

      void set_size(int size);

      void append(char letter);

      char peek();

      char pop();

      bool is_full();
      
      bool is_empty();

      int get_length();
};

#endif