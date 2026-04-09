#include <iostream>
#include <vector>
using namespace std;

void f(int x)
{
    [[assume (x > 0)]];
    
    cout << x << endl;
    
}
int main(int argc, char *argv[])
{
    int x = 1;
    f(x);
    return 0;
}
/**
 * assume is just the promise to the compiler that certain things will be true
 * eg x > 0 always
 * so compiler will generate code accourdingly for better optimizaton
 */