/*

Algorithm:
    1. read two integers
    2. print the sum of the two numbers
*/

#include <iostream>
using namespace std;

// function signature/protoype
// forward declaration
unsigned long add_two(unsigned int, unsigned int);
void print_answer(unsigned long);

int main()
{
    unsigned int a, b;
    unsigned long s; // declare variables
    cin >> a >> b;   // read two integer values from stdin
    // call a function
    s = add_two(a, b); // add two numbers using function and store it in s
    print_answer(s);   // output the value of sum to stdout with a newline
    return 0;          // return 0 means success to OS
}

// define fruitful function
unsigned long add_two(unsigned int n1, unsigned int n2) // n1, and n2 are parameters
{
    unsigned long sum;
    sum = n1 + n2;
    return sum;
}

// fruitless function
void print_answer(unsigned long ans)
{
    cout << ans << endl;
}