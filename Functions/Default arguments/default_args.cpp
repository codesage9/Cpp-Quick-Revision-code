#include <iostream>
using namespace std;

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