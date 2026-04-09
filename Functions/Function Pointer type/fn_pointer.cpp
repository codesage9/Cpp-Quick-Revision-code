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
