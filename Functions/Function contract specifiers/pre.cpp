#include <iostream>
using namespace std;

int divideFn(int a, int b) pre(b != 0)
{
    return a/b;
}
// Previously we have to manually do this

// int divideFn(int a, int b) {
//     if (b == 0) {
//         throw invalid_argument("Division by zero!");
//     }
//     return a / b;
// }

int main()
{
    cout << divideFn(10,2) << endl;
    // cout << divideFn(10,0) << endl;
    return 0;
}