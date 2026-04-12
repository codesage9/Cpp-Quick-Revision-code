#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello World";
}

int main()
{
    void (*fn)();
    fn = printHello;

    fn();
    fn();
    fn();

    return 0;
}

// Reuse without repeating conditionals 
// This function pointer give us the ability to pass function as a parameter
// Store in data structures  
// Runtime flexibility  

// That's why we see things like 
/*
    std::sort(v.begin(), v.end(), std::greater<int>());
*/

// here passing greater fn as a paremeter