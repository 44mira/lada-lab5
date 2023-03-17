/* 
    Legolas Tyrael B. Lada 
    1- BSCS
    checks if the word is a palindrome using stack 
*/

#include <iostream>
#include <algorithm>    // for transform()
#include "stack_class.h"
#include "stack_class.cpp"

using namespace std;

int main()
{
    // get input
    string input_word, reversed_word = "";
    cout << "Input the string to check if palindrome: ";
    cin >> input_word;
    cout << endl;

    transform(input_word.begin(), input_word.end(), input_word.begin(), ::tolower);   // lowercase the input

    Stack stack_word(input_word); // make stack
    
    while (!stack_word.is_empty())    // pop every character
        reversed_word += stack_word.pop();

    cout << ((input_word == reversed_word) ? "\nYour word is a palindrome." : "\nYour word is not a palindrome.");    

    return 0;
}
