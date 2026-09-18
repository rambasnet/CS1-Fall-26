/*

Algorithm:
    1. read two integers
    2. print the sum of the two numbers
*/

#include <iostream>
#include "../headers/functions.hpp"
using namespace std;

int main()
{
    unsigned int a, b;
    unsigned long s; // declare variables
    cin >> a >> b;   // read two integer values from stdin
    // call a function
    s = add_two(a, b); // add two numbers using function and store it in s
    print_answer(s);   // output the value of sum to stdout with a newline
    return 0;          // return 0 to OS; means success
}
