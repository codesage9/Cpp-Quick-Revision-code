#include <iostream>
#include <vector>
using namespace std;

void inputs(int(*Fn)(int,int))
{
    cout << Fn(10,20) << endl;
}

int additionFn(int a, int b)
{
    return a+b;
}

int main()
{
    int (*fn)(int,int);
    fn = additionFn;
    inputs(fn);
    // Here I am passing fn as an parameter
    return 0;
}

// This allow us to use functions as a parameter as a normal pointer or a value 
// we can store them and use them dynamically at runtime