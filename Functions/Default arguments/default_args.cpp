#include <iostream>
using namespace std;


// void f(int a, int b = 10, int c = 20); // valid
// void g(int a = 10, int b);             // invalid
// Once a parameter has a default, all parameters to its right must also have default

int fn(int a, int b = 2)
{
    return a*b;
}
int main()
{
    int a = 10;
    cout << "a = " << a << "b = 10" << " ans = " << fn(a,10) << endl;
    cout << "a = " << a << "b = ? using default arg" << " ans = " << fn(a) << endl;
    return 0;
}