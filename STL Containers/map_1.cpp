    // #include <bits/stdc++.h>
    #include <iostream>
    #include <vector>
    #include <map>

    using namespace std;

    void Print_map(const map<int,int> &mp)
    {
        cout << "{";
        for(auto it : mp)
        {
            cout << "{" << it.first << "," << it.second << "},"; 
        }
        cout << "}\n";
    }
    // void Print_map_structural_building(map<int,int>& mp)
    // {
    //     for(const auto [key, val] : mp)
    //     {
    //         cout << "{" << key << "," << val << "},";
    //     }
    //     cout << "\n";
    // }

    void Normal_map(int n)
    {
        map <int, int> mp;

        cout << "Enter the Key val pair of the Map: " ;
        while(n--)
        {
            int x,y;
            cin >> x >> y;
            mp[x] = y;
        }
        Print_map(mp);
        // Print_map_structural_building(mp);
    }

    void Map_Pair_Print(const map<int,pair<int,int>>& m_p)
    {
        cout << "\n{\n";
        for(auto it : m_p)
        {
            cout << "{" << it.first << ",{" << it.second.first << "," << it.second.second << "}},\n";
        }
        cout << "}";
    }

    void Map_with_pair(int n)
    {
        map<int,pair<int,int>> m_p;
        int key, i1, i2;
        while(n--)
        {
            cout << "Enter the Key: ";
            cin >> key;
            cout << "Enter the i1 & i2: ";
            cin >> i1 >> i2;
            m_p[key] = {i1,i2};
        }
        Map_Pair_Print(m_p);
    }

    // void Map_vector(vector<int>& vec)
    // {
    //     map<int,int> v_m;
    //     // for(int i : vec)
    //     // {
    //         v_m.insert(vec.begin(),vec.end())
    //     // }
    // }

    int main(int argc, char *argv[])
    {
        int n; 
        cout << "Enter the n: "; cin >> n;

        Normal_map(n);
        Map_with_pair(n);

        vector<int> Vec {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

        return 0;
    }