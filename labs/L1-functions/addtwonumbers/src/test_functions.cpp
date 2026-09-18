#include <cassert>
#include <iostream>
using namespace std;

#include "../headers/functions.hpp"

void test_add_two()
{
    unsigned long a = add_two(9, 10);
    unsigned long expected = 19;
    assert(a == expected);
}

void test_add_two_2()
{
    assert(add_two(2, 0) != 3);
}

void test_third()
{
    assert(add_two(9, 3) == 12);
    cerr << "third pass " << endl;
}

int main()
{
    test_add_two();
    test_add_two_2();
    test_third();
    cout << "all tests cases passed..." << endl;
    return 0;
}