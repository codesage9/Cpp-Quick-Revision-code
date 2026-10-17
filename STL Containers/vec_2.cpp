#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:
    void Vec_Creation(int n)
    {

    }
};

void Vec_Creation(int n)
{
    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}
void Vec_Creation(int n, int val)
{
    vector<int> vec(n,val);
    for(int i=0; i<n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n;
    cin >> n;

    Vec_Creation(n);
    Vec_Creation(n, 10);

    return 0;
}