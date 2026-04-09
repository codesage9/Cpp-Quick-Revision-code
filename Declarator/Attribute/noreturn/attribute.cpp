#include <iostream>
using namespace std;

[[noreturn]] void fn()
{
    cout << "this function dosen't return the control to the caller funciton\n";
    // added later
    exit(0);
    cout << "Let's see what will happen if we run it\n";
    
}

[[noreturn]] void error()
{
    throw runtime_error("This function always throws");
}

int main(int argc, char* argv[])
{
    // fn();
    error();
    cout << "the control to main fn after return\n";

    return 0;
}

// These attributes used to tell compiler for the better optimizations
// when the fn are used for throw exceptions
// embedded programming
 