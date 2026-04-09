#include <iostream>
using namespace std;

void Outer_fn();
int main()
{
    // In C++, functions must be defined at global scope, class scope, or namespace scope.
    // You can declare a function inside another function, but not define it there.
    // that means 

    Outer_fn();
    return 0;
}

// void outer() {
//     void inner() {   // ❌ invalid in C++
//         cout << "inner" << endl;
//     }
//     inner();
// }

// instead we do this 

void Inner_fn() {
    cout << "Inner function" << endl;
}

void Outer_fn() {
    Inner_fn();  // call inner
    cout << "Outer function" << endl;
}