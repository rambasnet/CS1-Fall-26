#include <iostream>
#include "../headers/functions.hpp"

using namespace std;

// define fruitful function
unsigned long add_two(unsigned int n1, unsigned int n2) // n1, and n2 are formal parameters
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