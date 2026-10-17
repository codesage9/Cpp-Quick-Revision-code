#include <iostream>
#include <utility>
#include <vector>
#include <string>
#if __cplusplus > 201703L
    #include <any>
#endif
using namespace std;

#if __cplusplus > 201703L
    // any pair
    void any_pair()
    {
        
        // cout << "any type\n";
        // pair<any, any> ap;
        // ap.first = 10;
        // ap.second= "Hello";
        // cout << any_cast<int>(ap.first) << " " << any_cast<string>(ap.second) << endl;
    }
#endif

void Normal_Pair()
{
    pair<int, int> p;
    p.first = 10;
    p.second= 20;

    cout << p.first << " " << p.second << endl;
}
void Normal_Pair_by_pass_by_val(int i1, int i2)
{
    pair<int, int> p {i1, i2};

    cout << p.first << " " << p.second << endl;
}

void Nested_pair()
{
    pair<int, pair<int, int>> np {1,{5, 9}};
    cout << "{"<< np.first << ", {" << np.second.first << ", " << np.second.second << "}}\n";

}
void Vector_pair()
{
    vector<pair<int,string>> Details;

    int n; cout << "Enter N: "; cin >> n;
    for(int i=0; i<n; i++)
    {
        int t1; string t2; cin >> t1 >> t2 ;
        Details.push_back({t1, t2});
    }
    for(int i=0; i<n; i++)
    {
        cout << "{" << Details[i].first << ", " << Details[i].second << "}, ";  
    }
    cout << "\n";
}

void Structural_Binding_orDirect_Access()
{
    vector<pair<int,int>> Vec {{1,2},{2,3},{3,4},{4,5}};

    // for(auto it : Vec)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    for(auto [x,y] : Vec)
    {
        cout << x << " " << y << endl;
    }
}

int main()
{
    // cout << "Enter the pair 1 and 2" << endl;
    // int i1, i2; cin >> i1 >> i2;
    // Normal_Pair();
    // Normal_Pair_by_pass_by_val(i1, i2);
    // Nested_pair();
    // Vector_pair();
    Structural_Binding_orDirect_Access();

    return 0;
}