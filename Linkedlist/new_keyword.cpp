#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int x) : val(x), next(nullptr){}
};

class Linkedlist
{
public:
    void push_front(int x)
    {
        Node* newNode = new Node(x);
    }
};

// ListNode* dummy = new ListNode(-1); 
// ListNode* tail = dummy;       // Valid! Both are pointers. You are copying the address.




// 2. "Is the data type ListNode and * for both?"

// No. Their data types are completely different:
// • The type of dummy is ListNode (a solid structure containing an integer and a pointer).
// • The type of tail is ListNode* (a 64-bit memory address).
// Because ListNode and ListNode* are two different types, C++ refuses to assign one directly to the other without the & operator.





// ListNode dummy;
//  since dummy is not a pointer we also cannot use -> instead use .

// Linkedlist::Linkedlist(/* args */)
// {
// }

// Linkedlist::~Linkedlist()
// {
// }


int main()
{
    int i1 = 10;                // static
    int* i2 = new int(20);      // dynamic / heap
    // int i3 = new int(30);    // Error because new keyword pointer so lvalue must be a pointer type
    cout << "i1 : " << i1 << endl;
    cout << "i2 : " << i2 << endl; 
    cout << "*i2 : " << *i2 << endl; 

    // Let say I am creating a linkedlist

    return 0;
}