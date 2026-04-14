#include <iostream>
#include <unordered_map>
using namespace std;

// Happy Number is the Q i am taking as an example

// Normal Jindegi
// int Sq_Sum(int n)
// {
//     int t = 0;
//     while(n != 0)
//     {
//         int r = n % 10;
//         t += r * r;
//         n /= 10;
//     }
//     return t;
// }
// int Happy_Number(int n)
// {
//     unordered_map<int,int> ump;
//     while(n != 1 && ump.find(n) == ump.end())
//     {
//         ump[n] = 1;
//         n = Sq_Sum(n); // Ye hai aam jindegi
//     }
//     return n == 1;
// }


int Happy_Number(int n)
{
    unordered_map<int,int> ump;
    while(n != 1 && ump.find(n) == ump.end())
    {
        ump[n] = 1;
        // Ye hai mentos jindegi
        n = [](int x)
        {
            int t = 0;
            while(x != 0)
            {
                int r = x % 10;
                t += r * r;
                x /= 10;
            }
            return t;
        }(n);
    }
    return n == 1;
}

int main()
{
    int n; cin >> n;
    int ans = Happy_Number(n);
    cout << "ans = " << ans << endl;
    return 0;
}