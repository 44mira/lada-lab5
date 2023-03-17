#include "stack_class.h"
#include <iostream>

using namespace std;

int length, size;
bool isEmpty;
char* letters;

Stack::Stack(int size): size(size), length(0), isEmpty(true)
{
    /* sets size of stack */
    this->set_size(size);
}

Stack::Stack(string word): size(word.length()), length(word.length()), isEmpty(false)
{
    /* overloaded set string */
    this->set_size(size);
    for (int i = 0; i < length ; i++)
        *(letters+i) = word[i];

} 

void Stack::set_size(int size)
{
    /* sets size */
    letters = (char*) malloc(size); 
}

void Stack::append(char letter)
{
    /* adds to top of stack */
    try
    {
    if (this->is_full())
        throw length_error("ERROR: Stack is full!");
    }
    catch(length_error& e)
    {
    cerr << e.what() << endl;
    exit(1);
    }
    
    length++;   // increase length and change isEmpty state
    if (length == 1)
    isEmpty = false;
    
    *(letters+length-1) = letter; // append data 
}

char Stack::peek()
{
    /* returns top of stack */
    return *(letters+length-1);
}

char Stack::pop()
{
    /* removes and returns top of stack */
    try
    {
        if (this->is_empty())  // check if stack is empty
        throw length_error("ERROR: Stack is empty!");
    }
    catch(length_error& e)
    {
    cerr << e.what() << endl;
    exit(1);
    }
    
    char letter = this->peek();
    if (!--length)    // set stack to empty if length = 0
        isEmpty = true;
    
    return letter;
}

bool Stack::is_full()
{
    return length == size;
}

bool Stack::is_empty()
{
    return isEmpty;
}

int Stack::get_length()
{
    return length;
}