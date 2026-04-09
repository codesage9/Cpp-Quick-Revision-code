#include <iostream>
using namespace std;

void fn()
{
    cout << "Fn call\n";
    return;
}

[[noreturn]] int main(int argc, char* argv[])
{
    cout << "Main fn\n";
    fn();
    cout << "Main fn after fn call\n";
    return 0; // -> exit(0);
}