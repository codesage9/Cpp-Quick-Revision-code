#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> vec;

    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        vec.push_back(x);
    }
    for(int z: vec) cout << z << " ";
    return 0;
}