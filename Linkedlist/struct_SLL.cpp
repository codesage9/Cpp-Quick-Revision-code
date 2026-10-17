#include <iostream>
using namespace std;

struct struct_SLL
{
    /* data */
}/*var1, var 2, ... */;
// Self ref struct

struct Node1
{
    int i2;
    struct Node1 *next;
};

// Typedef format format
typedef struct Node2
{
    int i3;
    struct Node2 *next; //next is pointer to struct Node2,          next datatype is int or hexadecimal same as pointer
}SinglyLinkedList; // This is just the another name not a variable of node2 since we used typedef

int main()
{

    return 0;
}