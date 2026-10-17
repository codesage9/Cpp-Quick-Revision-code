#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void Solve(int x, int y, int r)
    {
        int ans ;
        for(int i= (-r); i<=r; i++)
        {
            for(int j= (-r); j<=r; j++)
            {
                if(pow(r,2) == pow((x - i), 2) + pow((y - j), 2))
                {
                    cout << i << " " << y << "\n";
                    return;
                }
            }
        }
    }
};

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int x,y,r; cin >> x >> y >> r;
        Solution solution;
        solution.Solve(x,y,r);
    }
    return 0;
}
