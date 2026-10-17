#include <iostream>
#include <utility>
#include <string>
#include <vector>

// #include <bits/stdc++.h>
using namespace std;

void print_vp(vector<pair<int,int>>& v_p1)
{
    int n = v_p1.size();
    cout << "{";
    for(int i=0; i<n; i++)
    {
        cout << "{" << v_p1[i].first << "," << v_p1[i].second << "}";
        if(i < n-1) cout << ",";
    }
    cout << "}\n\n\n";
}

void iterator_printf(vector<pair<int,int>>& vp)
{
    cout << "\n\n\nIterator printing\n\n{";
    for(vector<pair<int,int>> :: iterator it = vp.begin(); it != vp.end(); it++)
    {
        cout << "{" << (*it).first << "," << (*it).second << "}" ;
        if(it+1 < vp.end()) cout << ",";
    }
    cout << "}";
}

void take_user_inputs()
{
    vector<pair<int,int>> vp_2;
    int n; cin >> n;
    int a, b;
    for(int i = 0;i<n; i++)
    {
        cin >> a >> b;
        vp_2.push_back({a,b});
    }
    print_vp(vp_2);
    iterator_printf(vp_2);
}

int main() 
{
	// your code goes here
    
    vector<pair<int,int>> v_p1 = {{1,2}, {2,3}, {3,4}};
    
    print_vp(v_p1);
    take_user_inputs();
    
    return 0;    
}
