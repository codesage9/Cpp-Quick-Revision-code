#include <iostream>
#include <unordered_map>
using namespace std;

bool isHappy(int n) 
{    
    unordered_map<int,int> ump;
    while(n != 1 && ump.find(n) == ump.end())
    {
        ump[n] = 1;
        // Ye hai mentos jindegi
        [&]()
        {
            int t = 0;
            while(n != 0)
            {
                int r = n % 10;
                t += r * r;
                n /= 10;
            }
            n = t;
        }();
    }
    return n == 1;
}


int main()
{
    int n; cin >> n;
    bool ans = isHappy(n);
    cout << "ans = " << ans << endl;
    return 0;
}